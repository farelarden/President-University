#include<iostream>
#include<string>
using namespace std;
int main(){
	string word="hello";
	string underscore="-----";
	string answerWord;
	string answer;
	

	cout<<"Welcome to the game"<<"\n";
	cout<<underscore<<"\n";
	
	for(int a=0;a<5;a++){
	cout<<"Please enter your guess"<<"\n";
	while(true){
		cin>>answerWord;
		/*dalam game hangman, kita cmn bisa input 1 huruf, if dibawah ini mengecek input, 
		kalau input itu lebih dari 1 huruf, dida akan ngelooping lagi */
		if(answerWord.length()>1){
		cout<<"Your answer is wrong, please try again";
		continue;
		}
		else
		break;
	}
		int found=word.find(answerWord);
	
		if(found!=-1){
			for (int i = 0; i < word.length(); i++) {
					if (word[i] == answerWord[0]) {
						underscore[i] = answerWord[0];
					}
				}
				cout<<"Correct!"<<endl<<underscore<<endl;
		}
		else{
			cout<<"Incorrect"<<endl<<underscore<<endl;
		}
		
		if(underscore==word){
			cout<<endl<<"You have win the game";
			return 0;
			
		}
	
}
		cout<<"What's the answer?";
		cin>>answer;
		if(answer==word){
			cout<<endl<<"You have win the game";
		}
		else
		cout<<endl<<"You have lose the game";
		
		return 0;
}
        
        
