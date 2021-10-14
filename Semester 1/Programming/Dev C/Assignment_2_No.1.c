#include<stdio.h>

int main()
{
	int u,v,w,triangle;
	
	printf("Enter the size of Triangle:");
	scanf("%d",&triangle);
	
	
	for(u=triangle ; u>=1 ; u--)
	{
		for(v=triangle ; v>u ; v--)
			printf(" ");

		for(w=1 ; w<=u; w++)
		{
			printf("*");
			
		}
		printf("\n");
	}
    
    return 0;
}


