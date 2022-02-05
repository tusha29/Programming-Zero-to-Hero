#include <stdio.h>
int main(){

    printf("\n==================================\n");

    char character;
    
    printf("Enter any Character: ");
    scanf("%c", &character);
    printf("- - - - - - - - - -\n");

    if(character >='A' && character <='Z'){
        printf("%c is a Uppercase alphabet.", character);
    }
    else if(character >='a' && character <='z'){
        printf("%c is Lowercase alphabet.", character);
    }

    printf("\n==================================\n");

    return 0;
}