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
			
	for(i=0;string1[i] !='\0' ;i++)
		printf("%c--",string1[!-i+1]);
		
	printf("\n");
	
	
	return 0;
}
