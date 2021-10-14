#include<stdio.h>
#include <string.h>

void clear_stdin ()
{
	while(getchar() !='\n') {}
}

int main()
{
	char operate;
	float x,y;
	float total=0;
	
	printf("Please input X and Y\n");
	printf("X :");
	scanf("%f",&x);
	
	printf("\nY :");
	scanf("%f",&y);
	
	clear_stdin();
	
	printf("Enter the operator: ");
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
