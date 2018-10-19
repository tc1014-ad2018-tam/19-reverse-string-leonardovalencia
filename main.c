#include <stdio.h>
#include <mem.h>
#include <string.h>
//This program helps the user by putting the string entered and printing it in the reverse
//Marco Leonardo Valencia
//A01412017
//Date: October 17

//First we make the function to print backwards our string
int revstr(char str[]){
    for(int i = strlen(str); i>0; i--){
        printf("%c", str[i-1]);
    } return str;
}


int main() {
    //Declaration of variables required
    char str[100];
    int revstr1;

    //We ask the user for the input
    printf("Hello, I will help you print the string required backwards\n Please give a string\n");
    fgets(str, sizeof(str), stdin);

    printf("Your text backwards is \n");
    revstr(str);

    return 0;
}