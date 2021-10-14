#include<iostream>
#include<sstream>
#include<conio.h>
#include<string>
#include <stdlib.h>
#include<stdio.h>
using namespace std;
int main(){

int i;
char c,buf[1000];
cout<<"Password: ";

for(i=0;(c=getch())!='\r';)
{
     //checking wheter the entered character is backspace  NOTE: ASCII value for '\b' is 8
    if(c!=8)
    {
        buf[i]=c;
        printf("*");
        i++;
    }
    else
    {
        i--;
        if(i<0)
            i++;
        else
            printf("\b \b");//implementing the effect of backspace
    }
}
buf[i]='\0';//terminating the password string 
cout<<buf;//to check the input password is stored correctly or not, i displayed them
getch();
}
