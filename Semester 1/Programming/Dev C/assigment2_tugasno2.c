#include<stdio.h>
int main ()
{
	int grade;
	int aAdd=0, bAdd=0, cAdd=0, dAdd=0, eAdd=0;
	
	printf("Enter grade:\n");
	scanf("%d",&grade);
	
	while((grade=getchar()) !=EOF)
	{
	
		switch(grade/10)
		{
			case 10:
			case 9:
						/* Grades between 85 -100 */
						++aAdd;
						printf("You get an A\n");
						break;
			
		 	case 8:
			case 7:
						/* Grades between 75 -84 */
						++bAdd;
						printf("You get a B\n");
						break;
						
			case 6:
			case 5:
						/* Grades between 65 - 74*/
						++cAdd;
						printf("You get a C\n");
						break;
						
			case 4:
			case 3:
						/* Grades between 50 - 64 */
						++dAdd;
						printf("Sorry, you failed\n");
						break;
						
			case 2:
			case 1:
						/* Grades between 0 - 49 */
						++eAdd;
						printf("Sorry, you failed\n");
						break;
			
			default:
					printf("Incorrect grade entered");
					printf("Enter a new grade\n");
					break;
					
		}
	}
	
	

	
	printf("Totals for each letter grade are:\n");
	printf("A:%d\n", aAdd);
	printf("B:%d\n", bAdd);
	printf("C:%d\n", cAdd);
	printf("D:%d\n", dAdd);
	printf("E:%d\n", eAdd);
	
	
	
return 0;
}
