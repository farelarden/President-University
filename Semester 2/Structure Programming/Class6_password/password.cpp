#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main(){
	string pass1="";
	char ch;
	cout<<"Enter pass\n";
	ch=_getch();
	while(ch !=13){
		pass1.push_back(ch);
		cout<<'*';
		ch=_getch();
	}
	if(pass1=="123"){
		cout<<"\nAccess granted :P\n";
		}
		else{
			cout<<"\nAccess aborted...\n";
		}
}
