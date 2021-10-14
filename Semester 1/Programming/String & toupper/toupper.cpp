#include <stdio.h>
#include <ctype.h>

int main()
{
	char string1[20];
	int i;
	printf("Enter Your First Name:");
	
	gets(string1);
	/*scanf("%s",string1);*/
	
	/*for(i=0;string1[i] != '\0';i++)
	string1[i]=tolower(string1[i]);
	printf("My First Name is %s\n",string1);*/
	
	/*for(i=1;string1[i] != '\0';i++)
	string1[i]=tolower(string1[i]);
	printf("My First Name is %s\n",string1);*/
	
	/*for(i=0;string1[i] != '\0';i++)
	string1[i]=toupper(string1[i]);
	printf("My First Name is %s\n",string1);*/
	
	string1[0]=toupper(string1[0]);
	
	for(i=1;string1[i] != '\0';i++)
	{
		if (string1[i]==' ')
		string1[i+1]=toupper(string1[i+1]);
	}
	
	printf("My First Name is %s\n",string1);
	
	return 0;
	
}
