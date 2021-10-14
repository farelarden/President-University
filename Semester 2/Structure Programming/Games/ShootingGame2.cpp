#include<iostream>

#include<stdlib.h>

#include<time.h>

#include<conio.h>

using namespace std;

string p1, p2, gun1, gun2, x, y;
double ammo1 = 5, ammo2 = 5, coin1 = 100, coin2 = 100, medkit1, medkit2, hp1 = 1000, hp2 = 1000, armor1 = 20, armor2 = 20, damage1 = 20, damage2 = 20, accuracy1 = 100, accuracy2 = 100;
char str[] = "Shooting Game V2.0", str1[] = "Made by Farel Arden", back, option, shop1, shop2, talent1, talent2, guns1, guns2, p, q;
double random1, random2, xp1 = 100, xp2 = 100, crit1 = 10, crit2 = 10, ignore1 = 1, ignore2 = 1, headshot1 = 10, headshot2 = 10, crithit1, crithit2;
double ignorehit1, ignorehit2, headhit1, headhit2, xpGain1 = 50, xpGain2 = 50, coinGain1 = 20, coinGain2 = 20;
double recover1, recover2, damageA = 0, damageB = 0, armorA = 0, armorB = 0;
int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, t=0, s = 0, r = 0;
int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, v = 1;
void menu(), ammo_1(), armor_1(), medicine1(), potion1(), shop_1(), talent_1(), board1(), board2(), shop_2();
void talent_2(), name(),medkit_1(),medkit_2();
void play2();
char px;
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
void rules() {
        system("cls");
        for (int i = 0; i < 5; i++) {
                cout << ("\n");
        }
        cout << "  Rules" << endl << endl;
        cout << "  1. At the start of the game, each Player have 100 coins" << endl;
        cout << "  2. The coins can be spent in the shop" << endl;
        cout << "  3. Player 1 start the first shot (Gun 1 damage 30, accuracy 70) and player 2 defend" << endl;
        cout << "  4. Player 1 generate RANDOM number between 0 to 100." << endl;
        cout << "  5. IF random number < accuracy (70) THEN player 2 HP = HP - damage (30)." << endl;
        cout << "  6. IF random number > accuracy (70) THEN shooting missed, player 2 HP = HP, no changes to Player 2 HP." << endl;
        cout << "  7. Player 2 start his/her turn to shot player 1. Shooting turns until one of the player HP = 0." << endl;
        cout << "  8. Each Turn the player that wins the round will get 20 coins and 50xp" << endl;
        cout << "  9. Player wins when the other player HP reach 0.";
        cout << "\n\n";
        cout << "    Please press backspace to go back...";
        cout << "\n";
        back = _getch();
        if (back == 8)
                menu();
        else {
                rules();
        }

}
void menu() {
        system("cls");
        for (int i = 0; i < 10; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Game Menu -" << endl << endl;
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
        if (option == 49) {

        } else if (option == 50)
                rules();
        else {
                menu();
        }
}
void name() {
        system("cls");
        for (int i = 0; i < 10; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Name Resignation -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Please enter P1 name: ";
        cin >> p1;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Please enter P2 name: ";
        cin >> p2;
        cout << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }

        system("pause");
}
void guns_1() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Guns Shop - " << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin1<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "1.  M4A1 Carbine | DMG=60 | ACC=40 | PRICE=50" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "2.  AK 47 | DMG=70 | ACC=60 | PRICE=90" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "3.  P90 | DMG=50 | ACC=50 | PRICE=50" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "4.  AUG | DMG=50 | ACC=70 | PRICE=80" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "5. M4LMG | DMG=80 | ACC=70| PRICE=120" << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << p1 << ", please choose your weapon" << endl << endl;

        guns1 = _getch();

        if (guns1 == 49) {

                if (coin1 >= 50) {

                        gun1 = "M4A1 Carbine";
                        damage1 = 60;
                        accuracy1 = 40;
                        coin1 -= 50;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought M4A1 Carbine " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }

        }
        if (guns1 == 50) {
                if (coin1 >= 90) {

                        gun1 = "AK 47";
                        damage1 = 70;
                        accuracy1 = 60;
                        coin1 -= 90;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought AK 47 " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }

        if (guns1 == 51) {
                if (coin1 >= 50) {

                        gun1 = "P90";
                        damage1 = 50;
                        accuracy1 = 50;
                        coin1 -= 50;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought P90 " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        system("pause");
                }
        }
        if (guns1 == 52) {
                if (coin1 >= 80) {

                        gun1 = "AUG";
                        damage1 = 50;
                        accuracy1 = 70;
                        coin1 -= 80;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought AUG " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        system("pause");
                }
        }

        if (guns1 == 53) {
                if (coin1 >= 120) {

                        gun1 = "M4LMG";
                        damage1 = 80;
                        accuracy1 = 70;
                        coin1 -= 120;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought M4LMG " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        system("pause");
                }

        }

        if (guns1 == 8)
                shop_1();

        shop_1();

}
void guns_2() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Guns Shop - " << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin2<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "1.  M4A1 Carbine | DMG=60 | ACC=40 | PRICE=50" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "2.  AK 47 | DMG=70 | ACC=60 | PRICE=90" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "3.  P90 | DMG=50 | ACC=50 | PRICE=50" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "4.  AUG | DMG=50 | ACC=70 | PRICE=80" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "5. M4LMG | DMG=80 | ACC=70| PRICE=120" << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << p2 << ", please choose your weapon" << endl << endl;

        guns2 = _getch();

        if (guns2 == 49) {

                if (coin2 >= 50) {

                        gun2 = "M4A1 Carbine";
                        damage2 = 60;
                        accuracy2 = 40;
                        coin2 -= 50;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought M4A1 Carbine " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }

        }
        if (guns2 == 50) {
                if (coin2 >= 90) {

                        gun2 = "AK 47";
                        damage2 = 70;
                        accuracy2 = 60;
                        coin2 -= 90;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought AK 47 " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }

        if (guns2 == 51) {
                if (coin2 >= 50) {

                        gun2 = "P90";
                        damage2 = 50;
                        accuracy2 = 50;
                        coin2 -= 50;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought P90 " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        system("pause");
                }
        }
        if (guns2 == 52) {
                if (coin2 >= 80) {

                        gun2 = "AUG";
                        damage2 = 50;
                        accuracy2 = 70;
                        coin2 -= 80;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought AUG " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        system("pause");
                }
        }

        if (guns2 == 53) {
                if (coin2 >= 120) {

                        gun2 = "M4LMG";
                        damage2 = 80;
                        accuracy2 = 70;
                        coin2 -= 120;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought M4LMG " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        system("pause");
                }

        }

        if (guns2 == 8)
                shop_2();

        shop_2();

}

void armor_1() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Armor Shops - " << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin1<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.1 | DEF: 200 | PRICE: 40" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.2 | DEF: 300 | PRICE: 80" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.3 | DEF: 400 | PRICE: 120" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.4 | DEF: 500 | PRICE: 160" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.5 | DEF: 600 | PRICE: 180" << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << p1 << ", please choose your armor" << endl << endl;
        p = _getch();
        if (p == 49) {
                if (coin1 >= 40) {

                        armor1 = 200;
                        coin1 -= 40;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.1" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }

        }
        if (p == 50) {
                if (coin1 >= 80) {

                        armor1 = 300;
                        coin1 -= 80;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.2" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }
        if (p == 51) {
                if (coin1 >= 120) {
                        armor1 = 400;
                        coin1 -= 120;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.3" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }
        if (p == 52) {
                if (coin1 >= 160) {
                        armor1 = 500;
                        coin1 -= 160;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.4" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }
        if (p == 53) {
                if (coin1 >= 180) {
                        armor1 = 600;
                        coin1 -= 180;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.5" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }

        shop_1();
}
void armor_2() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Armor Shops - " << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin2<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.1 | DEF: 200 | PRICE: 40" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.2 | DEF: 300 | PRICE: 80" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.3 | DEF: 400 | PRICE: 120" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.4 | DEF: 500 | PRICE: 160" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Lv.5 | DEF: 600 | PRICE: 180" << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << p2 << ", please choose your armor" << endl << endl;
        p = _getch();
        if (p == 49) {
                if (coin2 >= 40) {

                        armor2 = 200;
                        coin2 -= 40;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.1" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }

        }
        if (p == 50) {
                if (coin2 >= 80) {

                        armor2 = 300;
                        coin2 -= 80;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.2" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }
        if (p == 51) {
                if (coin2 >= 120) {
                        armor2 = 400;
                        coin2 -= 120;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.3" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }
        if (p == 52) {
                if (coin2 >= 160) {
                        armor2 = 500;
                        coin2 -= 160;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.4" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }
        if (p == 53) {
                if (coin1 >= 180) {
                        armor2 = 600;
                        coin2 -= 180;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "You've just bought Armor Lv.5" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                }
        }

        shop_2();
}
void medicine1() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- MedKit Shop -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin1<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Your MedKit: " << medkit1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Do you want to buy more MedKit?(if yes press y)" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        p = _getch();

        if (p == 121) {

                cout << "1 MedKit = 40 coin" << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }

                cout << "How much MedKit would you like? " << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cin >> t;
                if (coin1 >= t * 40) {

                        coin1 -= t * 40;
                        medkit1 += t;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << t << " MedKit(s) just added to your inventory " << endl;
                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;

                }

                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");
                shop_1();
        } else if (p == 110)
                shop_1();
        else if (p == 8)
                shop_1();
        else
                medicine1();

}
void medicine2() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- MedKit Shop -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin2<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Your MedKit: " << medkit2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Do you want to buy more MedKit?(if yes press y)" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        p = _getch();

        if (p == 121) {

                cout << "1 MedKit = 40 coin" << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }

                cout << "How much MedKit would you like? " << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cin >> t;
                if (coin2 >= t * 40) {

                        coin2 -= t * 40;
                        medkit2 += t;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << t << " MedKit(s) just added to your inventory " << endl;
                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;

                }

                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");
                shop_2();
        } else if (p == 110)
                shop_2();
        else if (p == 8)
                shop_2();
        else
                medicine2();

}
void ammo_1() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Ammo Shop -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin1<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Your Ammo: " << ammo1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Do you want to buy more ammo?(if yes press y)" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        p = _getch();
        if (p == 121) {

                cout << "1 ammo = 1 coin" << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cout << "How much ammo would you like? " << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cin >> t;
                if (coin1 >= t) {
                        coin1 -= t;
                        ammo1 += t;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << t << " ammos just added to your inventory " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                        shop_1();

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;

                }

                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");
                shop_1();
        } else if (p == 110)
                shop_1();
        else if (p == 8)
                shop_1();
        else
                ammo_1();

}
void ammo_2() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Ammo Shop -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"Your Gold: "<<coin2<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Your Ammo: " << ammo2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Do you want to buy more ammo?(if yes press y)" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        p = _getch();
        if (p == 121) {

                cout << "1 ammo = 1 coin" << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cout << "How much ammo would you like? " << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cin >> t;
                if (coin2 >= t) {
                        coin2 -= t;
                        ammo2 += t;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << t << " ammos just added to your inventory " << endl;
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        system("pause");
                        shop_2();

                } else {
                        for (int i = 0; i < 30; i++) {
                                cout << (" ");
                        }
                        cout << "Sorry you didn't have enough coins" << endl;

                }

                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");
                shop_2();
        } else if (p == 110)
                shop_2();
        else if (p == 8)
                shop_2();
        else
                ammo_2();

}
void shop_1() {
        system("cls");
        for (int i = 0; i < 9; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Player 1 Shop -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Your Gold: " << coin1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "1. Guns" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "2. Ammo" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "3. Armor" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "4. Medicine" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Press Enter to go to the Talent Tree" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }

        shop1 = _getch();
        if (shop1 == 49)
                guns_1();
        else if (shop1 == 50)
                ammo_1();
        else if (shop1 == 51)
                armor_1();
        else if (shop1 == 52)
                medicine1();
        else if (shop1 == 13) {
		talent_1();
        } else {
                shop_1();
        }

}
void shop_2() {
        system("cls");
        for (int i = 0; i < 9; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Player 2 Shop -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Your Gold: " << coin2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "1. Guns" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "2. Ammo" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "3. Armor" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "4. Medicine" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Press Enter to go to the Talent Tree" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }

        shop2 = _getch();

        if (shop2 == 49)
                guns_2();
        else if (shop2 == 50)
                ammo_2();
        else if (shop2 == 51)
                armor_2();
        else if (shop2 == 52)
                medicine2();
        else if (shop2 == 13) {
                talent_2();
        } else {
                shop_2();
        }

}

void talent_1() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 35; i++) {
                cout << (" ");
        }

        cout << "         - Player 1 Talent Tree -" << endl << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          XP: " << xp1 << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          1. Damage Lvl " << a << " => + " << a * 10 << "% Damage (70 XP -> 10%/Lvl)" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          2. EXP Lvl " << b << " ==> + " << b * 20 << "% Exp Gain (100 XP -> 20%/Lvl)" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          3. Recover Lvl " << c << " ==> + " << c * 2 << " Hp recovery(80 XP) -> 2 HP/Lvl" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          4. Armor Lvl " << d << " ==> + " << d * 10 << "% Armor(60 XP -> 10%/Lvl)" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          5. Coin Lvl " << e << " ==> + " << e * 20 << "% Coin Gain(90 XP -> 20%/Lvl)" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          6. Headshot Rate Lvl " << f << " ==> + " << f * 5 << "% Headhsot rate(70 XP ->5%/Lvl)" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          7. Critical Rate Lvl "<< g <<" ==> + "<<g*10<<"% Critical rate(70 XP ->5%/Lvl)"<<endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          8. Pierce Attack Rate Lvl " << h << "==> + " << h * 2 << "% Pierce Attack Rate(70 XP -> 2%/Lvl)" << endl << endl << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          Please press the number to get the talent you want" << endl;
         for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "          Press ENTER to go to the next phase or BACKSPACE to go back to the shop" << endl;

        while (true) {
                talent1 = _getch();
                if (talent1 == 49) {
                        if (xp1 >= 70) {
                                xp1 -= 70;
                                damageA += 0.1;
                                a += 1;
                               

                                cout << endl;
                                 for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout << "    You've leveled up your ATK points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
						
                                
                                system("pause");
                                talent_1();

                        } else {
                        	
								cout<<endl;
								for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
						
                                system("pause");
                                talent_1();
                        }

                } else if (talent1 == 50) {
                        if (xp1 >= 100) {
                                xp1 -= 100;
                                xpGain1 += xpGain1 * 0.2;
                                b += 1;
                                
						
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your XP Gain points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
						
                                system("pause");
                                talent_1();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
            }
        }
						
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
            }
            system("pause");
            talent_1();
            
        }
						
                                
                        
                 else if (talent1 == 51) {
                        if (xp1 >= 80) {
                                xp1 -= 80;
                                recover1 += 2;
                                c += 1;
                                cout << endl;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Recovery points" << endl;
                               for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        } else {
                        	cout<<endl;
                        	 for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        }
                } else if (talent1 == 52) {
                        if (xp1 >= 60) {
                                xp1 -= 60;
                                armorA += 0.1;
                                d += 1;
                                cout << endl ;
                                 for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your DEF points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        } else {
                        	cout<<endl;
                        	 for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                 for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        }

                } else if (talent1 == 53) {
                        if (xp1 >= 90) {
                                xp1 -= 90;
                                coinGain1 += coinGain1 * 0.1;
                                e += 1;
                                cout << endl ;
                                 for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Coin Gain points" << endl;
                                 for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        } else {
                        	cout<<endl;
                        	 for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        }
                } else if (talent1 == 54) {
                        if (xp1 >= 70) {
                                xp1 -= 70;
                                headshot1 += 5;
                                f += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Headshot points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        }

                } else if (talent1 == 55) {
                        if (xp1 >= 70) {
                                xp1 -= 70;
                                crit1 += 10;
                                g += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Critical Hit points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        }
                } else if (talent1 == 56) {
                        if (xp1 >= 70) {

                                xp1 -= 70;
                                ignore1 += 0.2;
                                h += 1;
                                cout << endl;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout << "    You've leveled up your Piercing Attack points" << endl;
                               for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        } else {
cout<<endl;
for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_1();
                        }
                } else if (talent1 == 13) {
                        medkit_1();

                } else if (talent1 == 8)
                        shop_1();

                else {
                        talent_1();

                }

        }

}
void talent_2() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 35; i++) {
                cout << (" ");
        }

        cout << "          - Player 2 Talent Tree -" << endl << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           XP: " << xp2 << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           1. Damage Lvl " << r << " => + " << r * 10 << "% Damage (70 XP -> 10%/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           2. EXP Lvl " << j << " ==> + " << j * 20 << "% Exp Gain (100 XP -> 20%/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           3. Recover Lvl " << k << " ==> + " << k * 2 << " Hp recovery(80 XP -> 2 HP/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           4. Armor Lvl " << l << " ==> + " << l * 10 << "% Armor(60 XP -> 10%/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           5. Coin Lvl " << m << " ==> + " << m * 20 << "% Coin Gain(90 XP -> 20%/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           6. Headshot Rate Lvl " << n << " ==> + " << n * 5 << "% Headshot rate(70 XP -> 5%/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
        cout << "           7. Critical Rate Lvl " << o << " ==> + " << o * 10 << "% Critical rate(70 XP -> 10%/Lvl)" << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
		cout << "           8. Pierce Attack Rate Lvl " << s << "==> + " << s * 2 << "% Pierce Attack Rate(70 XP -> 2%/Lvl)" << endl << endl << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
		
		cout << "           Please press the number to get the talent you want " << endl;
        for (int i = 0; i < 20; i++) {
                cout << (" ");
        }
		cout << "           Press ENTER to go to the next phase or BACKSPACE to go back to the shop" << endl;

        while (true) {
                talent2 = _getch();
                if (talent2 == 49) {
                        if (xp2 >= 70) {
                                xp2 -= 70;
                                damageB += 0.1;
                                r += 1;

                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your ATK points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();

                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                               for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }

                } else if (talent2 == 50) {
                        if (xp2 >= 100) {
                                xp2 -= 100;
                                xpGain2 += xpGain2 * 0.2;
                                j += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your XP Gain points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }
                } else if (talent2 == 51) {
                        if (xp2 >= 80) {
                                xp2 -= 80;
                                recover2 += 2;
                                k += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Recovery points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                               for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }
                } else if (talent2 == 52) {
                        if (xp2 >= 60) {
                                xp2 -= 60;
                                armorB += 0.1;
                                l += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your DEF points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }

                } else if (talent2 == 53) {
                        if (xp2 >= 90) {
                                xp2 -= 90;
                                coinGain2 += coinGain2 * 0.1;
                                m += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Coin Gain points" << endl;
                               for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }
                } else if (talent2 == 54) {
                        if (xp2 >= 70) {
                                xp2 -= 70;
                                headshot2 += 5;
                                n += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Headshot points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }

                } else if (talent2 == 55) {
                        if (xp2 >= 70) {
                                xp2 -= 70;
                                crit2 += 10;
                                o += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Critical Hit points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
                        	cout<<endl;
                        	for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }
                } else if (talent2 == 56) {
                        if (xp2 >= 70) {

                                xp2 -= 70;
                                ignore2 += 0.2;
                                s += 1;
                                cout << endl ;
                                for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
								cout<< "    You've leveled up your Piercing Attack points" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        } else {
cout<<endl;
for (int i = 0; i < 26; i++) {
                cout << (" ");
        }
                                cout << "    Sorry you didn't have enough XP" << endl;
                                for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
                                system("pause");
                                talent_2();
                        }
                } else if (talent1 == 13) {
                        medkit_2();

                } else if (talent1 == 8)
                        shop_2();

                else {
                        talent_2();

                }

        }

}

void play1() {
        system("cls");
        srand(time(0));
        for (int i = 0; i < 9; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Round " << v << " -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Player 1's turn to attack" << endl;
        if(ammo1>=1){
        random1 = (rand() % 100) + 1;
        crithit1 = (rand() % 100) + 1;
        headhit1 = (rand() % 100) + 1;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "The random number is " << random1 << endl << endl;
        
        	
		

        if (random1 < accuracy1) {

                if (crithit1 < crit1) {

                        if (headhit1 < headshot1) {

                                hp2 = hp2 - (2 * 3 * (damage1 + damage1 * damageA) - (2 * 3 * (damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Critical Damage!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Headshot!!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << (2 * 3 * (damage1 + damage1 * damageA) - (2 * 3 * (damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1 << " damage";
                                xp1 += xpGain1;
                                coin1 += coinGain1;
                                ammo1 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");

                        } else {
                                hp2 = hp2 - (2 * (damage1 + damage1 * damageA) - (2 * (damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Critical Damage!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << (2 * (damage1 + damage1 * damageA) - (2 * (damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1 << "damages" << endl;
                                xp1 += xpGain1;
                                coin1 += coinGain1;
                                ammo1 -= 1;
                                cout << endl;

                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");

                        }

                } else {
                        if (headhit1 < headshot1) {
                                hp2 = hp2 - (3 * (damage1 + damage1 * damageA) - (3 * (damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Headshot!!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << (3 * (damage1 + damage1 * damageA) - (3 * (damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1 << " damages" << endl;
                                xp1 += xpGain1;
                                coin1 += coinGain1;
                                ammo1 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");
                        } else {
                                hp2 = hp2 - ((damage1 + damage1 * damageA) - ((damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << ((damage1 + damage1 * damageA) - ((damage1 + damage1 * damageA) / (armor2 + armor2 * armorB))) * ignore1 << " damages" << endl;
                                xp1 += xpGain1;
                                coin1 += coinGain1;
                                ammo1 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }

                                system("pause");

                        }

                }

        } else {
                hp2 -= 0;
                ammo1 -= 1;
                xp1 += 2 * xpGain1;
                coin1 += 2 * coinGain1;
                cout<<endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cout << "You deal 0 damage" << endl;
                cout << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                        
                }
                system("pause");

        }
    }
    else{
    	cout<<endl<<endl;
    	 for (int i = 0; i < 30; i++) {
                        cout << (" ");
                    }
    	cout<<"You don't have enough ammo"<<endl;
    	for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
    	system("pause");
	}
        if (hp2 <= 0) {
                system("cls");
                for (int i = 0; i < 7; i++) {
                        cout << ("\n");
                }
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cout << p1 << " wins the game" << endl << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");
                exit(0);

        }
        hp1+=recover1;
        play2();

}

void play2() {
        system("cls");
        srand(time(0));
        for (int i = 0; i < 9; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Round " << v << " -" << endl << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Player 2's turn to attack" << endl;
        if(ammo2>=0){
		
        random2 = (rand() % 100) + 1;
        crithit2 = (rand() % 100) + 1;
        headhit2 = (rand() % 100) + 1;

        v += 1;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "The random number is " << random2 << endl << endl;

        if (random2 < accuracy2) {

                if (crithit2 < crit2) {

                        if (headhit2 < headshot2) {

                                hp1 -= (2 * 3 * (damage2 + damage2 * damageB) - (2 * 3 * (damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Critical Damage!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Headshot!!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << (2 * 3 * (damage2 + damage2 * damageB) - (2 * 3 * (damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2 << " damage" << endl;

                                xp2 += xpGain2;
                                coin2 += coinGain2;
                                ammo2 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");

                        } else {
                                hp1 -= (2 * (damage2 + damage2 * damageB) - (2 * (damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Critical Damage!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << (2 * (damage2 + damage2 * damageB) - (2 * (damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2 << " damages" << endl;
                                xp2 += xpGain2;
                                coin2 += coinGain2;
                                ammo2 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");

                        }

                } else {
                        if (headhit2 < headshot2) {
                                hp1 -= (3 * (damage2 + damage2 * damageB) - (3 * (damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "A Headshot!!" << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << (3 * (damage2 + damage2 * damageB) - (3 * (damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2 << "damages" << endl;
                                xp2 += xpGain2;
                                coin2 += coinGain2;
                                ammo2 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");
                        } else {
                                hp1 -= ((damage2 + damage2 * damageB) - ((damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                cout << "You deal " << ((damage2 + damage2 * damageB) - ((damage2 + damage2 * damageB) / (armor1 + armor1 * armorA))) * ignore2 << " damages" << endl;
                                xp2 += xpGain2;
                                coin2 += coinGain2;
                                ammo2 -= 1;
                                cout << endl;
                                for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
                                system("pause");

                        }

                }

        } else {
                hp1 -= 0;
                ammo2 -= 1;
                xp2 += 2 * xpGain2;
                cout<<endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cout << "You deal 0 damage";
                coin2 += 2 * coinGain2;
                cout << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");

        }
    }
    else{
    	cout<<endl<<endl;
    	for (int i = 0; i < 30; i++) {
                        cout << (" ");
                    }
    	cout<<"You don't have enough ammo"<<endl;
    	for (int i = 0; i < 30; i++) {
                                        cout << (" ");
                                }
    	system("pause");
    	
	}
    

        if (hp1 <= 0) {
                system("cls");
                for (int i = 0; i < 7; i++) {
                        cout << ("\n");
                }
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                cout << p2 << " wins the game" << endl << endl;
                for (int i = 0; i < 30; i++) {
                        cout << (" ");
                }
                system("pause");
                exit(0);
        }
        hp2+=recover2;
        shop_1();

}

void board1() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Player 1 Stats -" << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Name: " << p1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "HP: " << hp1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Guns: " << gun1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "ATK: " << damage1 + damage1 * damageA << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "DEF: " << armor1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Headshot Rate: " << headshot1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Critical Rate: " << crit1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Piercing: " << ignore1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Medkit: " << medkit1 << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Gold: " << coin1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "XP: " << xp1 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "You can press ENTER to go to the next phase" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }

        system("pause");
        board2();

}
void board2() {
        system("cls");
        for (int i = 0; i < 7; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "- Player 2 Stats -" << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Name: " << p2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "HP: " << hp2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Guns: " << gun2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "ATK: " << damage2 + damage2 * damageB << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "DEF: " << armor2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Headshot Rate: " << headshot2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Critical Rate: " << crit2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Armor Piercing: " << ignore2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Medkit: " << medkit2 << endl << endl;

        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "Gold: " << coin2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "XP: " << xp2 << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout << "You can press ENTER to go to the next phase" << endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        system("pause");

       play1();
}


void medkit_1(){
	
	while(true){
		system("cls");
		for (int i = 0; i < 10; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
		cout<<"- Player 1 -"<<endl<<endl;
		for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"HP: "<<hp1<<endl<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
	cout<<"Do you want to use medkit ?(y/n)"<<endl;
	px=_getch();
	if(px==121){
		if(medkit1>=1){
			for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
		
			cout<<"You've used 1 medkit"<<endl;
			medkit1-=1;
			hp1+=100;
			if(hp1>1000)
			hp1=1000;
			for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
			system("pause");
			continue;
		}
		else{
		for (int i = 0; i < 30; i++) {
                cout << (" ");
                
        }
        cout<<"You don't have enough medkit"<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
		system("pause");
        shop_2();
    }
	
		
	}
		else if(px==110||px==13){
			shop_2();
		}
	
		
	}
	
	}	

void medkit_2(){
	while(true){
		system("cls");
		for (int i = 0; i < 10; i++) {
                cout << ("\n");
        }
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        
		cout<<"- Player 2 -"<<endl<<endl;
		for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
        cout<<"HP: "<<hp1<<endl<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
		
	cout<<"Do you want to use medkit ?(y/n)"<<endl;
	px=_getch();
	if(px==121){
		if(medkit1>=1){
			for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
		
			cout<<"You've used 1 medkit"<<endl;
			medkit2-=1;
			hp2+=100;
			if(hp2>1000)
			hp2=1000;
				for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
			system("pause");
			continue;
		}
		else{
		for (int i = 0; i < 30; i++) {
                cout << (" ");
                
        }
        cout<<"You don't have enough medkit"<<endl;
        for (int i = 0; i < 30; i++) {
                cout << (" ");
        }
			system("pause");
        board1();
    }
	
		
	}
		else if(px==110||px==13){
			board1();
		}
	
		
	}
	
	}	

int main() {
        intro();
        menu();
        name();
        shop_1();
        return 0;

}
