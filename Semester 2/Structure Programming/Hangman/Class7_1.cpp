#include<iostream>
#include<string>
#include <stdlib.h>

using namespace std;

string a;
string x;
string y;
string z;
string answer;
void input(){
	while(true){
			cout<<"What is the sentence?"<<endl;
			getline(cin, x);
			if (x[0] > 'z' || x[0] < 'a') {
			cout << "Your guess must be a lowercase letter. "<<endl;
			continue;
		}
		else
		break;
	}
	
	for(int b=0;b<x.size();b++){
		if(x[b]==' '){
			y.push_back(' ');
		}
		else
		y.push_back('-');
	}

			cout << y<< endl;
}
void process(){
	while(true){
	
	for(int i=0;i<3;i++){
		while(true){
			
		
		cout<<endl<<"What is Z?"<<endl;
		getline(cin, z);
			if (x[0] > 'z' || x[0] < 'a') {
			cout << "Your guess must be a lowercase letter. "<<endl;
			continue;
		}
			else
		break;
		if (z.length() > 1) {
			cout << "That is more than one character."<<endl;
			continue;
		}
		else
		break;
		
	}
		for(int j=0;j<x.size();j++){
			if(z[0]==x[j]){
				y[j]=z[0];
				cout<<"Correct!"<<endl;
				}
				
			}
			
				cout<<y;		
			
		}
		
		cout<<endl;
		cout<<"Do you want to continue? "<<endl;
		getline(cin, a);
		if(a=="yes"){
			continue;
		}
		else
		break;
		}
	}
	
void guess(){
	cout<<"So, What's the last guess?"<<endl;
	getline(cin, answer);
	if(answer==x){
		system("cls");
		cout<<"You win the game";
	}
	else{
		system("cls");
		cout<<"You lose the game";
	}
	
}
		


int main(){

	
	input();
	process();
	guess();
	

	return 0;
	
}
