#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char mystr[50];
	printf("Enter your string: ");
	scanf("%s",mystr);
	
	for(i=strlen(mystr)-1;i>=0;i--)
		printf("%c",mystr[i]);
		
		printf("\n");
		
		return 0; 
}
