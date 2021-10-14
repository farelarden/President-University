#include <stdio.h>

int main () {
    int P, Q;
    scanf("%d %d", &P, &Q);
    
    for(int i=P;i<=Q;i++)
    {
    	if(i%3==0&&i%5==0)
    	printf("FizzBuzz\n");
    	
    	    
    	else if(i%5==0)
    	printf("Buzz\n");
    	
    
		else if(i%3==0)
    	printf("Fizz\n");
    
		
		else printf("%d\n",i);
		
	}
    
    
    return 0;
}
