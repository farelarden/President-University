#include <stdio.h>
int main()
{
	
	printf("\n");
    printf("                  -- Hello! Welcome to Binary Search Application --\n");
    printf("<===========================================<o>===========================================>\n");
   	printf(" -- Please input the number of elements, integers, and the value that you want to find --\n");
   	printf("<===========================================<o>===========================================>\n");
   	printf("\n");
   	printf("This application's purpose is to show how binary search works\n");
   	printf("Note:The integers from elements 1 until n should be increasing, not decreasing\n");
   	printf("\n");
   	//I've added some introduction to the application to make the interface better
   	
	int elements,max,mid,min,i,integers,value,binary[100];
	printf("Please Enter number of elements:");
	scanf("%d",&elements);
	
	printf("\nPlease input the integers\n");
	for( i=0;i<elements;i++)
	{
		printf("Integer:");
		scanf("%d",&binary[i]);
	}
	
	printf("\nEnter the Value:");
	scanf("%d",&value);
	
	min=0;
	max=elements-1;
	mid=(min+max)/2;
	
	while(min<=max)
	{
		if(value==binary[mid])
		{
				printf("\n%d is in element number %d",value,mid+1);
				break;
		}
	
		else if(value>binary[mid])
		min=mid+1;
			
		else
		max=mid-1;
		
		mid=(min+max)/2;
	}
	
	printf("Sorry the value you've inputted do not exist in the elements");
	
	printf("\n<===========================================<o>===========================================>\n");
	printf("                   -- Thank you for using Binary Search Application --\n");
	printf("<===========================================<o>===========================================>\n");			
	
	return 0;
	
}
