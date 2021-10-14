#include<stdio.h>

int main()
{
	FILE*input=fopen("source.txt","r");
	if(input ==NULL)
	{
		printf("Cannot open source file!\n");
		return 1;
	}
	FILE*output = fopen("destination.txt","w");
	if(output==NULL)
	{
		fclose(input);
		printf("Cannot open destination file\n");
		return 1;
	}
	
	char buffer[1024];
	int read,total=0;
	for(;;)
	{
		read=fread((void*)buffer, sizeof(char),1024,input);
		if(feof(input) && read ==0)
		break;
	}
	
	total += read;
	fwrite((void*)buffer,sizeof(char),read,output);


fclose(input);
fclose(output);

printf("Copied %d byte(s)!\n",total);
return 0;
}
