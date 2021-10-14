#include <stdio.h>

int main()
{
	char sentence[ 80 ];
	void reverse( const char * const );

 	printf( "Enter a line of text: " );
	gets( sentence );

 	printf( "\nThe line printed backwards is:\n" );
	reverse( sentence );

 	return 0;
}

 void reverse( const char * const sPtr )
 {
 	if ( sPtr[ 0 ] == '\0' )
 	return;
 	else {
 	reverse( &sPtr[ 1 ] );
	 putchar( sPtr[ 0 ] );
 }
 
}
