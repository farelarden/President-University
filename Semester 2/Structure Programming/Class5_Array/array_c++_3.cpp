#include<iostream>
#include <sstream>
#include<string>
 
using namespace std;

int main(){
	string name[100][100];
	int x;
	cout<<"How many input do you want? ";
	cin>>x;
	int y[1000];
	for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
				cout<<"Name: ";
				cin>>name[i][j];
				cout<<"Gender: ";
				cin>>name[i][j+1];
				cout<<"Age: ";
				cin>>name[i][j+2];
				stringstream halo(name[i][j+2]);
				halo >> y[i]; 
				cout<<"\n";
	}
}
	for(int i=0;i<x;i++){
	for(int j=0;j<1;j++){
		cout<<name[i][j]<<" is "<<name[i][j+1]<<" is "<<y[i]<<" years old \n";
		
	}
}
		cout<<"\n";
		
	for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
			switch(y[i]){
				case 1 ... 10:
				cout<<name[i][j]<<" is a kid\n";
				break;
				
				case 11 ... 20:
				cout<<name[i][j]<<" is a teenager \n";
				break;
				
				case 21 ... 50:
				cout<<name[i][j]<<" is an adult \n";
				break;
				
				case 51 ... 70:
				cout<<name[i][j]<<" is an old man \n";
				break;
				
				case 71 ... 100:
				cout<<name[i][j]<<" is a very old man \n";
				break;
				
			
				
				default:
				cout<<"Hi";
				break;
		}
	}
}
cout<<"\n";
	cout<<"Age 1-10 :\n";
		for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
			if(y[i]>=1&&y[i]<=10){
				cout<<". "<<name[i][j]<<"\n";
			}
			//else
			//cout<<"Hmm...There is no one in the list\n";
		}}
		
		cout<<"\n";
	cout<<"Age 11-20 :\n";
		for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
			if(y[i]>=11&&y[i]<=20){
				cout<<". "<<name[i][j]<<"\n";
			}
			//else
			//cout<<"Hmm...There is no one in the list\n";
		}}

cout<<"\n";
	cout<<"Age 21-50 :\n";
		for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
			if(y[i]>=21&&y[i]<=50){
				cout<<". "<<name[i][j]<<"\n";
			}
		//	else
			//cout<<"Hmm...There is no one in the list\n";
		}}

cout<<"\n";
	cout<<"Age 51-70 :\n";
		for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
			if(y[i]>=51&&y[i]<=70){
				cout<<". "<<name[i][j]<<"\n";
			}
		//	else
		//	cout<<"Hmm...There is no one in the list\n";
		}}

cout<<"\n";
	cout<<"Age 71-100 :\n";
		for(int i=0;i<x;i++){
		for(int j=0;j<1;j++){
			if(y[i]>=71&&y[i]<=100){
				cout<<". "<<name[i][j]<<"\n";
			}
		//	else
		//	cout<<"Hmm...There is no one in the list\n";
		}}


	

}
