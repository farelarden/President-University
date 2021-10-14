#include<stdio.h>

void plustwo(int);
void plus_two(int *);

int main()
{
	int x=10,y=10;
	
	//plustwo(x);
	plus_two(&y);
	// jadi yang penting adalah '&' --> call by referencce nya :D//
	printf("The value of x=%d\n",plustwo(x));
	printf("The value of y=%d\n",y);
	
	return 0;
}

void plustwo(int a)
{
	a=a+2;
	
	
}

void plus_two(int *b)
{
	*b=*b+2;
}
