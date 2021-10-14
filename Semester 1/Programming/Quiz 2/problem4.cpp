#include <stdio.h>
void reference(int*,int);

int main () {
	int N,S=773;
	scanf("%d", &N);
	if(N!=0)
	{
		reference(&S,N);
		printf("%d",S);
	}
	
	else
	printf("773");
	
	return 0;
}

void reference(int*K,int J)
{
	for(int i=1;i<=J;i++)
	{
		*K=*K+4+5*(i-1);
		
	}

}
	


