#include<stdio.h>

int main()
{
	int option;
	float x,y;
	float total=0;
	
	printf("\n");
	printf("<===========================================<o>===========================================>\n");
    printf("                         -- Hello! Welcome to Your Calculator --\n");
    printf("<===========================================<o>===========================================>\n");


   	printf("\n");
   
    printf("Please choose 1-4 to calculate the integers");
    printf("\n");
    printf("\n");
	printf("Enter 1 if for addition\n");
	printf("Enter 2 if for subtraction\n");
	printf("Enter 3 if for multiplication\n");
	printf("Enter 4 if for division\n");
	printf("\n");
	
	
	scanf("%d",&option);
	if(option>4 || option<1)
	{
		printf("Sorry there aren't any available options.");
		printf("\n<===========================================<o>===========================================>\n");
		printf("                   -- Thank you for using This Calculator--\n");
		printf("<===========================================<o>===========================================>\n");	

		return 0;
	}
	
	printf("Please input X and Y\n");
	
	printf("X :");
	scanf("%f",&x);
	
	printf("\nY :");
	scanf("%f",&y);
	

	
	switch(option)
	{
		case 1:
			total=x+y;
			printf("The addition result is %f",total);
			break;
			
		case 2:
			total=x-y;
			printf("The substraction result is %f",total);
			break;
			
		case 3:
			total=x*y;
			printf("The multiplication result is %f",total);
			break;
		
		case 4:
			total=x/y;
			printf("The division result is %.2f",total);
			break;
			
		default:
			printf("Sorry there aren't any available options");
			break;
	}

	printf("\n<===========================================<o>===========================================>\n");
	printf("                   -- Thank you for using This Calculator--\n");
	printf("<===========================================<o>===========================================>\n");	

	return 0;
	
	
}



