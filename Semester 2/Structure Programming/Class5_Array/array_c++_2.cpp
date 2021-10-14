#include<iostream>

using namespace std;

int main(){
	string name[4][2];
	int x;
	cout<<"How many input do you want? ";
	cin>>x;
	for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
				cout<<"Name: ";
				cin>>name[i][j];
				cout<<"Gender: ";
				cin>>name[i][j+1];
		}
	
	}
	for(int i=0;i<x;i++){
	for(int j=0;j<1;j++){
		cout<<name[i][j]<<" is "<<name[i][j+1]<<"\n";
	}
}
	
	return 0;
}
