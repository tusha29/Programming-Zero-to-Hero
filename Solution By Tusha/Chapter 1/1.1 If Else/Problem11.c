#include <stdio.h>
int main(){

    printf("\n==================================\n");

    int weekNumber;

    printf("Enter Week Number: ");
    scanf("%d", &weekNumber);
    printf("- - - - - - - - - -\n");

    if(weekNumber == 1){
        printf("Week day is Saturday.");
    }
    else if(weekNumber == 2 ){
        printf("Week day is Sunday.");
    }
    else if(weekNumber == 3){
        printf("Week day is Monday.");
    }
    else if(weekNumber == 4){
        printf("Week day is Tuesday.");
    }
    else if(weekNumber == 5){
        printf("Week day is Wednessday.");
    }
    else if(weekNumber == 6){
        printf("Week day is Thursday.");
    }
    else if(weekNumber == 7){
        printf("Week day number is Friday.");
    }
    else{
        printf("This is not available.");
    }

    printf("\n==================================\n");

    return 0;
}