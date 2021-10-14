#include<iostream>
using namespace std;

int main(){
	int x,y,z;
	
	cout<<"Please input any number"<<"\n";
	cin>>x;
	
	cout<<"Please input any number"<<"\n";
	cin>>y;
	
	cout<<"Input the starting number"<<"\n";
	cin>>z;
	
	for(int i=0;i<y;i++){
		
		for(int h=0;h<x;h++){

				cout<<z++;
			
		}
		
		cout<<"\n";
	}
	
	return 0;
}
