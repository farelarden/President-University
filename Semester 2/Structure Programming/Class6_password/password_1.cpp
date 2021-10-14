#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
    /* code */
    printf("Hello, press a, b or c to continue:\n");
    char key = getchar();
    printf("\n");

    switch (key){
    case  'a':
        system("cls");
        //some code
        break;
    case  'b':
        //many lines of code
        break;
    case  'c':
        system("clear");
        //many lines of code
        break;
    default:
        printf("Ok saliendo\n");
        break;
    }
    printf("bye\n");
}
