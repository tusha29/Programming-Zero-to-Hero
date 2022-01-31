#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int number;

    printf("Enter the number: ");
    scanf("%d", &number);
    printf("- - - - - - - - - -\n");

    if(number%2 ==0){
        printf("This is Even number.");
    }
    else if(number%2 !=0){
        printf("This is Odd number.");
    }

    printf("\n==================================\n");

    return 0;
}