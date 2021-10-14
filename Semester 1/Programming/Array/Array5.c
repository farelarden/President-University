#include<stdio.h>
#include<string.h>


int main()
{
	char string1[20], string2[] = "string literal";
	int i;

	
	printf("Enter a string:");
	scanf("%s", string1);
	printf(" string1 is: %s\nstring2: is %s \n"
			" string1 with spaces between characthers is:\n",
			string1, string2);
			
    for(i=strlen(string1)-1;i>=0;i--)o
		printf("%c--",string1[i]);
		
	printf("\n");
	
	
	return 0;
}
