#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("- - - - - - - - - -\n");

    if(number%5 ==0 && number%11 ==0){
        printf("number is divisible by 5 and 11");
    }
     else if(number%5 !=0 && number%11 !=0){
        printf("number is not divisible by 5 and 11");
     }
    printf("\n==================================\n");
   
    return 0;
}