#include <stdio.h>

int main(){

    printf("\n==================================\n");

    char character;

    printf("Enter any character: ");
    scanf("%c", &character);

    printf("- - - - - - - - - -\n");

    if(character=>'a' && character<='z' || character=>'A' && character<='Z'){
        printf("The entered character %c is an Alphabet", character);
    }
    else{
        printf("The entered character %c is not an Alphabet", character);
    }

    printf("\n==================================\n");

    return 0;
}