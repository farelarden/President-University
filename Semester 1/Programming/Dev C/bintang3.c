int main()
{
	int i,j,k,N;
	
	printf("Enter the value of N:");
	scanf("%d",&N);
		
	for(i=N ; i<=10 ; i++)
	{
		for(j=10 ; j>i ; j--)
			printf(" ");

		for(k=0 ; k<=i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
    
    return 0;
}


