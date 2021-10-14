#include<iostream>
#include <string>
using namespace std;

int main()
{
	int date,year,age;
	string month;
	cout<<"<========== Hello! It is Me, Zippy! ==========>"<<endl;
	cout<<"       Your very own Zodiac Announcer!"<<endl;
	cout<<endl<<" Please Enter Your Birthday Date"<<"\n";
	cin>>date;	
	cin>>month;
	
	if(date>=22 && month == "December" && date<=31 && date>=1 || month=="Desember"|| month=="desember"|| month=="december"){
		cout<<"Your Zodiac is Capricorn";
		return 0;
	}
	else if(date<=20 && month == "January" && date<=31 && date>=1 || month=="Januari"|| month=="january"|| month=="januar"){
		cout<<"Your Zodiac is Capricorn";
		return 0;
	}
	else if(date>=21 && month =="January" && date<=31 && date>=1|| month=="Januari"|| month=="januari"|| month=="january"){
		cout<<"Your Zodiac is Aquarius";
		return 0;
	}
	else if(date<=19 && month=="February" && date<=29 && date>=1|| month=="Februari"|| month=="februari"|| month=="february"){
		cout<<"Your Zodiac is Aquarius";
		return 0;
	}
	else if(date>=20 && month=="February" && date<=29 && date>=1|| month=="februari"|| month=="Februari"|| month=="february"){
		cout<<"Your Zodiac is Pisces";
		return 0;
	}
	else if(date<=20 && month=="March" && date<=31 && date>=1|| month=="march"|| month=="maret"|| month=="Maret"){
		cout<<"Your Zodiac is Pisces";
		return 0;
	}
	else if(date>=21 && month=="March" && date<=31 && date>=1|| month=="march"|| month=="maret"|| month=="Maret"){
		cout<<"Your Zodiac is Aries";
		return 0;
	}
	else if(date<=19 && month=="April" && date<=30 && date>=1|| month=="april"){
		cout<<"Your Zodiac is Aries";
		return 0;
	}
	else if(date>=20 && month=="April" && date<=30 && date>=1|| month=="april"){
		cout<<"Your Zodiac is Taurus";
		return 0;
	}
	else if(date<=20 && month=="May" && date<=31 && date>=1|| month=="may"|| month=="Mei"|| month=="mei"){
		cout<<"Your Zodiac is Taurus";
		return 0;
	}
	else if(date>=21 && month=="May" && date<=31 && date>=1|| month=="Mei"|| month=="may"|| month=="mei"){
		cout<<"Your Zodiac is Gemini";
		return 0;
	}
	else if(date<=21 && month=="June" && date<=30 && date>=1|| month=="juni"||month=="june"|| month=="June"){
		cout<<"Your Zodiac is Gemini";
		return 0;
	}
	else if(date>=22 && month=="June" && date<=30 && date>=1|| month=="juni"|| month=="Juni"|| month=="june"){
		cout<<"Your Zodiac is Cancer";
		return 0;
	}
	else if(date<=23 && month=="July" && date<=31 && date>=1|| month=="july"|| month=="Juli"|| month=="juli"){
		cout<<"Your Zodiac is Cancer";
		return 0;
	}
	else if(date>=24 && month=="July" && date<=31 && date>=1 || month=="july"|| month=="juli"|| month=="Juli"){
		cout<<"Your Zodiac is Leo";
		return 0;
	}
	else if(date<=23 && month=="August" && date<=31 && date>=1 || month=="agustus"|| month=="Agustus"|| month=="august"){
		cout<<"Your Zodiac is Leo";
		return 0;
	}
	else if(date>=24 && month=="August" && date<=31 && date>=1 ||month=="agustus"|| month=="Agustus"|| month=="august"){
		cout<<"Your Zodiac is Virgo"; 
		return 0;
	}
	else if(date<=22 && month=="September" && date<=30 && date>=1 ||month=="september"){
		cout<<"Your Zodiac is Virgo";
		return 0;
	}
	else if(date>=23 && month=="September" && date<=30 && date>=1||month=="september"){
		cout<<"Your Zodiac is Libra";
		return 0;
	}
	else if(date<=22 && month=="October" && date<=31 && date>=1||month=="Oktober"||month=="oktober"||month=="october"){
		cout<<"Your Zodiac is Libra";
		return 0;
	}
	else if(date>=23 && month=="October" && date<=31 && date>=1||month=="Oktober"||month=="oktober"||month=="october"){
		cout<<"Your Zodiac is Scorpio";
		return 0;
	}
	else if(date<=22 && month=="November" && date<=30 && date>=1||month=="november"){
		cout<<"Your Zodiac is Scorpio";
		return 0;
	}
	else if(date>=23 && month=="November" && date<=30 && date>=1||month=="november"){
		cout<<"Your Zodiac is Sagitarius";
		return 0;
	}
	else if(date<=20 && month=="December" && date<=31 && date>=1|| month=="Desember"|| month=="desember"|| month=="december"){
		cout<<"Your Zodiac is Sagitarius";
		return 0;
	}
	else
	cout<<"Don't be silly, that is not a valid date'";

	return 0;
}
