#include<iostream>

#include<stdlib.h>

#include<time.h>

#include<conio.h>

using namespace std;
char str[] = "Shooting Game V1.0", str1[] = "Made By: Farel Arden", option, back, choice1, choice2, weapon1, weapon2, str2[] = "Let's see who will win the battle";
string P1, P2, gun1, gun2;
int hp_1 = 100, hp_2 = 100;
int damage_1, damage_2;
int accuracy_1, accuracy_2;
int randomNumber1, randomNumber2;
int i = 1;
void rules(), menu(), guns(), delay(), intro(), game();

void delay(clock_t a) {
  clock_t start;
  start = clock();
  while (clock() - start < a) {

  }
}
void intro() {
  for (int i = 0; i < 10; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }

  for (int i = 0; str[i] != '\0'; i++) {
    cout << str[i];
    delay(90);
  }
  cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  for (int i = 0; str1[i] != '\0'; i++) {
    cout << str1[i];
    delay(90);
  }
  delay(1500);

}
void menu() {
  system("cls");
  for (int i = 0; i < 10; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }

  cout << "1.Play Shooting Game";
  cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "2.Rules";
  cout << "\n";
  option = _getch();
  if (option == 49)
    game();
  else if (option == 50)
    rules();
	else{
	   menu();	
	}
}
void rules() {
  system("cls");
  for (int i = 0; i < 5; i++) {
    cout << ("\n");
  }
  cout << "    Rules";
  cout << "\n\n";
  cout << "    1. Player 1 start the first shot (Gun 1 damage 30, accuracy 70) and player 2 defend";
  cout << "\n";
  cout << "    2. Player 1 generate RANDOM number between 0 to 100.";
  cout << "\n";
  cout << "    3. IF random number < accuracy (70) THEN player 2 HP = HP - damage (30).";
  cout << "\n";
  cout << "    4. IF random number > accuracy (70) THEN shooting missed, player 2 HP = HP, no changes to Player 2 HP.";
  cout << "\n";
  cout << "    5. Player 2 start his/her turn to shot player 1. Shooting turns until one of the player HP = 0.";
  cout << "\n";
  cout << "    6. Player wins when the other player HP reach 0.";
  cout << "\n\n";
  cout << "    Please press backspace to go back";
  cout << "\n";
  back = _getch();
  if (back == 8)
    menu();
    else{
    	rules();
	}

}

void guns() {
  for (int i = 0; i < 4; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "<== These are the guns that you can choose to play ==>";
  cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "1. AK-47\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Damage:40\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Accuracy=50\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "2. P90-Bison\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Damage:30\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Accuracy=60\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << P1 << ", please choose your weapon(Press1/2)";
  cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  while (true) {
  weapon1 = _getch();
  
    if (weapon1 == 49) {
      cout << "AK-47, Mother Russia will be proud of you";
      gun1 = "AK-47";
      damage_1 = 40;
      accuracy_1 = 50;
      break;

    } else if (weapon1 == 50) {
      cout << "P90-Bison, an assault weapon, fit just for you";
      gun1 = "P90-Bison";
      damage_1 = 30;
      accuracy_1 = 60;
      break;

    } else {
    	continue;
    }
  }

  // choice(weapon1,damage_1,accuracy_1,gun1);
  cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << P2 << ", please choose your weapon(Press1/2)";
  cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  while (true) {
  weapon2 = _getch();
  
    if (weapon2 == 49) {
      cout << "AK-47, Mother Russia will be proud of you";
      gun2 = "AK-47";
      damage_2 = 40;
      accuracy_2 = 50;
      break;

    } else if (weapon2 == 50) {
      cout << "P90-Bison, an assault weapon, fit just for you";
      gun2 = "P90-Bison";
      damage_2 = 30;
      accuracy_2 = 60;
      break;

    } else {
  		continue;
    }
  }
  cout<<endl<<endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  system("pause");

}

void board() {
  system("cls");
    for (int i = 0; i < 5; i++) {
    cout << ("\n");
  }
   for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout<<"<== Battle Board ==>"<<endl;
  cout<<"\n";
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  
  cout <<  P1 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "HP: " << hp_1 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Gun: " << gun1 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Damage: " << damage_1 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Accuracy: " << accuracy_1 << endl << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << P2 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "HP: " << hp_2 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Gun: " << gun2 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Damage: " << damage_2 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Accuracy: " << accuracy_2 << endl;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout<<endl;
   for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  system("pause");
}
void play1() {
  system("cls");
    for (int i = 0; i < 8; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  srand(time(0));
  cout << "<== Round " << i<<" ==>";
  cout << "\n\n";
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << P1 << ",  attacks";
  i++;
  //cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  //cout<<"Press any key to continue";
  //system("pause");
  cout << "\n";
  randomNumber1 = (rand() % 100) + 1;
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "The random number is: " << randomNumber1;
  cout << "\n";
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  if (randomNumber1 < accuracy_1) {
    hp_2 = hp_2 - damage_1;
    cout << P1 << " deals " << damage_1 << " to " << P2;
  } else {
    hp_2 -= 0;
    cout << P2 << " evades the attack";
  }
cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  system("pause");

}
void play2() {
  system("cls");
     for (int i = 0; i < 8; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  srand(time(0));

  cout << "<== Round " << i<<" ==>";
  cout << "\n\n";  
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << P2 << ",  attacks";
  i++;
  //cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  //cout<<"Press any key to continue";
  //system("pause");
  cout << "\n";
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  randomNumber2 = (rand() % 100) + 1;
  cout << "The random number is: " << randomNumber1;
  cout << "\n";
    for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  if (randomNumber2 < accuracy_2) {
    hp_1 = hp_1 - damage_2;
    cout << P2 << " deals " << damage_2 << " to " << P1;
  } else {
    hp_1 -= 0;
    cout << P1 << " evades the attack";
  }
cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
 system("pause");

}

void game() {
  system("cls");
  for (int i = 0; i < 7; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "<== Name Registration ==>";
  cout << "\n\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Please Enter P1 Name: ";
  cin >> P1;
  cout << "\n";
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  cout << "Please Enter P2 Name: ";
  cin >> P2;
  cout << "\n\n";
      for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
  system("pause");
  system("cls");
  guns();
  system("cls");
  for (int i = 0; i < 10; i++) {
    cout << ("\n");
  }
  for (int i = 0; i < 30; i++) {
    cout << (" ");
  }

  for (int i = 0; str2[i] != '\0'; i++) {
    cout << str2[i];
    delay(90);
  }
 
  board();

}

int main() {
  srand(time(0));
  intro();
  menu();
  while (true) {
    play1();
    board();
    if (hp_1 <= 0) {
      system("cls");
      for (int i = 0; i < 10; i++) {
        cout << ("\n");
      }
      for (int i = 0; i < 30; i++) {
        cout << (" ");
      }
      cout << P2 << " wins the game";
        for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
      break;
    } else if (hp_2 <= 0) {
      system("cls");
      for (int i = 0; i < 10; i++) {
        cout << ("\n");
      }
      for (int i = 0; i < 30; i++) {
        cout << (" ");
      }
      cout << P1 << " wins the game";
        for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
      break;
    }
    play2();
    if (hp_1 <= 0) {
      system("cls");
      for (int i = 0; i < 10; i++) {
        cout << ("\n");
      }
      for (int i = 0; i < 30; i++) {
        cout << (" ");
      }
      cout << P2 << " wins the game";
        for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
      break;
    } else if (hp_2 <= 0) {
      system("cls");
      for (int i = 0; i < 10; i++) {
        cout << ("\n");
      }
      for (int i = 0; i < 30; i++) {
        cout << (" ");
      }
      cout << P1 << " wins the game";
        for (int i = 0; i < 30; i++) {
    cout << (" ");
  }
      break;
    }
    board();

  }

}
