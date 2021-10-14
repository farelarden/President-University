#include<stdio.h>
int main ()
{
	int aAdd=0;
	int bAdd=0;
	int cAdd=0;
	int dAdd=0;
	int eAdd=0;
	
	while(1)
	{
	int score;	
	printf("\nEnter Score:");
	scanf("%d",&score);
	
	if(feof(stdin))
	{
		break;
	}
		switch(score)
		{
			case 85 ... 100:
			printf("You get an A\n");  
			++aAdd;
			break;
			
		 	case 70 ... 84:
		 	printf("You get a B\n");
			++bAdd;
			break;
						
			case 60 ... 69:
			printf("You get a C\n");
			++cAdd;
			break;
						
			case 55 ... 59:
			printf("Sorry, you failed, you get a D\n");
			++dAdd;
			break;
						
			case 0 ... 54:
			printf("Sorry, you failed, you get an E\n");
			++eAdd;
			break;
			
			default:
					printf("Incorrect grade entered\n");
					break;
					
		}
	
	}
	
	printf("\nTotals for each letter grade are:\n");
	
	printf("A=%d  :", aAdd);
	for(int i=1;i<=aAdd;i++)
	{
		printf("*");
	}
	
	printf("\nB=%d  :", bAdd);
	for(int j=1;j<=bAdd;j++)
	{
		printf("*");
	}
	
	printf("\nC=%d  :", cAdd);
	for(int k=1;k<=cAdd;k++)
	{
		printf("*");
	}
	
	printf("\nD=%d  :", dAdd);
	for(int l=1;l<=dAdd;l++)
	{
		printf("*");
	}
	
	printf("\nE=%d  :", eAdd);
	for(int m=1;m<=eAdd;m++)
	{
		printf("*");
	}
	
	
	
return 0;
}
