#include <stdio.h>
#include <string.h>

int main()
{
 	const char *string1 = "The value is 3.14159";
 	const char *string2 = "aehi lsTuv";

 	printf( "%s%s\n%s%s\n\n%s\n%s%u\n",
	"string1 = ", string1, "string2 = ", string2,
	"The length of the initial segment of string1",
 	"containing only characters from string2 = ",
	 strspn( string1, string2 ) );
	 
	 /* length is from 1 -> jadi strspn itu akan nyari character dari string1 yang ada di 
	 string2 dan bisa lebih dari sekali dalam scanningnya
	 jadi length nya akan berakhir di spasi sebelum 3 */
	 return 0;
 }

