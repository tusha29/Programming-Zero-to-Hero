#include <stdio.h>

int main(){

    printf("\n==================================\n");

    char character;
    int lowerCaseVowel, upeerCaseVowel;

    printf("Enter any Character: ");
    scanf("%c", &character);
    printf("- - - - - - - - - -\n");

    lowerCaseVowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
    upeerCaseVowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');

    if(lowerCaseVowel || upeerCaseVowel){
        printf("%c is a Vowel.", character);
    }
    else{
        printf("%c is a Consonant.", character);
    }
    printf("\n==================================\n");

    return 0;
}