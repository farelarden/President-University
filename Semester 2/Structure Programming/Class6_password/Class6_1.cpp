#include<iostream>
#include<sstream>
#include<conio.h>
#include<string>
#include <stdlib.h>
using namespace std;

string P1;
string P2;
string p_1="";
string p_2="";
char ch;
char cg;
int p1;
int p2;
int point1=0;
int point2=0;

void regist(){
	cout<<"<== Welcome to the Game ==>\n\n";
	cout<<"Player 1: ";
	cin>>P1;
	cout<<"Player 2: ";
	cin>>P2;
	cout<<"\n";
	cout<<"Here are some rules for the game"<<"\n"<<"1. If P1 is an odd number, P2 must be greater than 2 in order for P2 to win"<<"\n"<<"2. If P2 is an even number, P2 must be lower than P1 in order for P2 to win the game"<<"\n\n\n";
}

void input(){
	cout<<"Please enter from 1 - 100"<<"\n";
	while(true){
		
		cout<<P1<<": ";
		ch=_getch();
		while(ch !=13){
			p_1.push_back(ch);
			cout<<'*';
			ch=_getch();
		}
		stringstream halo1(p_1);
		cout<<"\n";
		halo1>>p1;
		p_1="";
		if(p1>100||p1<1){
			cout<<"Your input is wrong, please try again\n";
			p_1="";
			continue;	
		}
		else
		break;
	
	}
	cout<<"Please enter from 20 - 80"<<"\n";
	while(true){
		
	cout<<P2<<": ";
		cg=_getch();
		while(cg !=13){
			p_2.push_back(cg);
			cout<<'*';
			cg=_getch();
		}
		stringstream halo2(p_2);
		cout<<"\n";
		p_2="";
		
		halo2>>p2;
		if(p2>80||p2<20){
			cout<<"Your input is wrong, please try again\n";
			p_2="";
			continue;	
		}
		else
		break;
	
	}
	
}
void game(){
	cout<<"\n";
	if(p1%2==1){
		if(p2>p1){
			cout<<"Congratulations, "+P2+" get 1 point";
			point2+=1;
			
		}
		else{
				cout<<"Congratulations, "+P1+" get 1 point";
				point1+=1;
		}
		
	}
	else{
		if(p2<p1){
				cout<<"Congratulations, "+P2+" get 1 point";
					point2+=1;
		}
	
		else{
				cout<<"Congratulations, "+P1+" get 1 point";
					point1+=1;
		}
	
	}
}
void board(){
	cout<<"\n\n"<<"<== Point Board ==>"<<"\n";
	cout<<P1<<":  "<< point1<<"\n";
	cout<<P2<<":  "<<point2<<"\n\n";
}

int main(){
	
		regist();
		while(true){
			
			input();
			game();
			board();
		if(point1==3||point2==3){
			break;
		}
		else
		continue;
		
	
	}
	
	if(point1==3){
		system("cls");
		cout<<"Congratulations, "+P1+" you have won the game";
		board();
	}
	else{
			system("cls");
	cout<<"Congratulations, "+P2+" you have won the game\n";
	board();
	}

	
}
