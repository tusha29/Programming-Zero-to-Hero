#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int monthNumber;

    printf("Enter a Month number: ");
    scanf("%d", &monthNumber);
    printf("- - - - - - - - - -\n");

    if(monthNumber == 1){
        printf("This is JANUARY, 31 days in this month.");
    }
    else if (monthNumber == 2){
        printf("This is FEBRUARY, 28 days in this month.");
    }
    else if (monthNumber == 3){
        printf("This is MARCH, 31 days in this month.");
    }
    else if (monthNumber == 4){
        printf("This is APRIL, 30 days in this month.");
    }
    else if (monthNumber == 5){
        printf("This is MAY, 31 days in this month.");
    }
    else if (monthNumber == 6){
        printf("This is JUNE, 30 days in this month.");
    }
    else if (monthNumber == 7){
        printf("This is JULY, 31 days in this month.");
    }
    else if (monthNumber == 8){
        printf("This is AUGUST, 31 days in this month.");
    }
    else if (monthNumber == 9){
        printf("This is SEPTEMBER, 30 days in this month.");
    }
    else if (monthNumber == 10){
        printf("This is OCTOBER, 31 days in this month.");
    }
    else if (monthNumber == 11){
        printf("This is NOVEMBER, 30 days in this month.");
    }
    else if (monthNumber == 12){
        printf("This is DECEMBER, 31 days in this month.");
    }
    else{
        printf("This is not available.");
    }

    printf("\n==================================\n");

    return 0;
}