#include <stdio.h>

int main(){

    printf("\n==================================\n");

    float number;

    printf("Enter a number: ");
    scanf("%f", &number);
    printf("- - - - - - - - - -\n");

    if(number > 0){
        printf("Positive");
    }
    else if(number == 0){
        printf("Zero");
    }
    else if(number < 0){
        printf("Negative");
    }

    printf("\n==================================\n");

    return 0;
}