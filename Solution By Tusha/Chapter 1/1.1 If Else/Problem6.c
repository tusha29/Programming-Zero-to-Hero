#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int year;

    printf("Enter the year: ");
    scanf("%d", &year);
    printf("- - - - - - - - - -\n");

    if(year % 400 == 0){
        printf("%d This is leap year.", year);
    }
    else if(year % 100 ==0){
        printf("%d This is not leap year.");
    }
    else if(year % 4 ==0){
        printf("%d This is leap year..");
    }
    else{
        printf("%d Not leap year.");
    }

    printf("\n==================================\n");

    return 0;
}