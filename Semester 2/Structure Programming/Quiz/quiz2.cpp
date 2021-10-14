#include<iostream>
using namespace std;

int main(){
	
	int x;
	cin>>x;
	
	switch(x){
		
		case 80 ... 100:
		cout<<"A";
		break;
		
		case 60 ... 79:
		cout<<"B";
		break;
		
		case 0 ... 59:
		cout<<"C";
		break;
		
		default:
		cout<<"your grade is empty";
		break;
		
	
	}
	
	return 0;
}
