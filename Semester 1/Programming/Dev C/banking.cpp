#include <stdio.h>
#include <string.h>
#include <math.h>

struct Account {
	int id;
	char name[32];
	int balance;
	int lastDay;
};

void process_transaction(struct Account *cur, int amount, int curDay) {
	if (cur->lastDay < curDay) {
		//printf("UID process lastDay %d curDay %d\n", cur->lastDay, curDay);
		int num = curDay - cur->lastDay;
		cur->balance = floor(cur->balance * pow(1.1, num));
		cur->lastDay = curDay;
	}
	int old = cur->balance;
	cur->balance += amount;
	//printf("UID %d: last %d, now %d\n", cur->id, old, cur->balance);
}

int main () {
	struct Account accounts[128] = { { -1, {0}, 0, 1 } };
	int curIdx = 0;
	int lastDay = 0;

	// Open file for input and output
	FILE *fin = fopen("transaction_list.txt", "r");
	if (fin == NULL) {
		printf("Cannot open file for input!\n");
		return 1;
	}

	FILE *fname = fopen("user_names.txt", "r");
	if (fname == NULL) {
		printf("Cannot open user names file!\n");
		return 1;
	}

	FILE *fout = fopen("user_list.txt", "w");
	if (fout == NULL) {
		fclose(fin);
		printf("Cannot open file for output!\n");
		return 1;
	}

	// Read file (names)
	while (curIdx < 128) {
		int custId;
		fscanf(fname, "%d", &custId);

		if (feof(fname)) {
			break;
		}

		int i=0;
		for (; i<curIdx; i++) {
			if (accounts[i].id > custId) {
				break;
			}
		}

		if (i != curIdx) {
			// shift previous entries to the right
			int size = curIdx - i;
			memmove(accounts + (sizeof(struct Account) * (i + 1)),
				accounts + (sizeof(struct Account) * i),
				size * sizeof(struct Account));
		}

		struct Account *current = accounts + i;
		current->id = custId;
		current->balance = 0;
		fscanf(fname, " %s", current->name);
		current->lastDay = 1;

		curIdx++;
	}

	// Read file (transaction)
	for (;;) {
		int custId, amount, curDay;
		fscanf(fin, "%d %d %d", &curDay, &custId, &amount);
		//printf("INPUT: %d %d %d\n", curDay, custId, amount);

		if (feof(fin)) {
			break;
		}

		for (int i=0; i<curIdx; i++) {
			struct Account *current = accounts + i;
			if (current->id == custId) {
				process_transaction(current, amount, curDay);
			}
		}

		if (curDay > lastDay) {
			lastDay = curDay;
		}
	}

	// Write to file
	printf("ID\tNAME\t\tBALANCE\n");
	for (int i=0; i<curIdx; i++) {
		struct Account *current = accounts + i;
		if (strlen(current->name) != 0) {
			// calculate final balance
			process_transaction(current, 0, lastDay+1);
			printf("%d\t%s\t\t%d\n", current->id, current->name, current->balance);
			fprintf(fout, "%d %s %d\n", current->id, current->name, current->balance);
		}
	}

	// Close file
	fclose(fin);
	fclose(fout);

	return 0;
}
