#include<stdio.h>
void clear_stdin ()
{
	while(getchar() !='\n') {}
}

int main()
{
	int x,y;
	float total=0;
	char operate;
	
	printf("X:");
	scanf("%d",&x);
	
	printf("Y:");
	scanf("%d",&y);
		clear_stdin();
	
	printf("Input Operator:");
	scanf("%c",&operate);
	
	switch(operate)
	{
		case '+':
		total=x+y;
		printf("The total is %.0f",total);
		break;
		
		case '-':
		total=x-y;
		printf("The total is %.0f",total);
		break;
		
		case '*':
		total=x*y;
		printf("The total is %.0f",total);
		break;
		
		case '/':
		total=x/y;
		printf("The total is %.2f",total);
		break;
	}
	
	return 0;
}


