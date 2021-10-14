#include<iostream>
using namespace std;

int main(){
	int x,y;
	
	cout<<"Please input any number"<<"\n";
	cin>>x;
	
	cout<<"Please input any number"<<"\n";
	cin>>y;
	
	for(int i=0;i<y;i++){
		cout<<"*";
		for(int h=1;h<x;h++){
			cout<<"*";
		}
		
		cout<<"\n";
	}
	
	return 0;
}
