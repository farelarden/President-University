#include<iostream>
using namespace std;

int main(){
	string name[100];
	//string z="Hello";
	int x;
	cout<<"How many people do you want?";
	cin>>x;
	cout<<"Please enter the names"<<"\n";
	for(int i=0;i<=x-1;i++){
	
		cin>>name[i];
	}
	//name[1]=z;
	
		cout<<"The names are :"<<"\n";
	for(int j=0;j<=x-1;j++){
	
		cout<<name[j];
		cout<<"\n";
	}
}
