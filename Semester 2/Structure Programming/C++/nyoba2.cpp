#include<iostream>

using namespace std;




int main(){
	int x,y;
	cin>>x>>y;
	for(int i=1;i<=y;i++){
		cout<<"*";
		for(int i=2;i<=x;i++){
			cout<<"*";
		}
		
		cout<<"\n";
	}
	
	return 0;
}
