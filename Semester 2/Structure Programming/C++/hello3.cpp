#include<iostream>

using namespace std;
int main()
{
	char x;
	cout<<"Do you want to eat?"<<endl<<"Y/N"<<endl;
	cin>>x;
	
	switch(x)
	{
		case 'Y':
		cout<<"Okay";
		break;
		
		case'N':
		cout<<"Not Okay";
		break;
		
		default:
		cout <<"Probably Okay";
		break;
	}
	
	return 0;
}

