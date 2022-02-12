#include <stdio.h>

int main(){

    printf("\n==================================\n");

    int amount;
    int note1000, note500, note200, note100, note50, note20, note10, note5, note2, note1;

    note1000 = note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;

    printf("Enter the amount: ");
    scanf("%d", amount);

    if(amount >= 1000){
        note1000 = amount / 1000;
        amount -= note1000 * 1000;
        printf("1000 = %d", note1000);
    }
    
    else if(amount >= 500){
        note500 = amount / 500;
        amount -= note500 * 500;
    }
    else if(amount >= 200){
        note200 = amount / 200;
        amount -= note200 * 200;
    }
    else if(amount >= 100){
        note200 = amount / 100;
        amount -= note100 * 100;
    }
    else if(amount >= 50){
        note50 = amount / 50;
        amount -= note50 * 50;
    }
    else if(amount >= 20){
        note20 = amount / 20;
        amount -= note200 * 20;
    }
    else if(amount >= 10){
        note10 = amount / 10;
        amount -= note10 * 10;
    }
    else if(amount >= 5){
        note5 = amount / 5;
        amount -= note5 * 5;
    }
    else if(amount >= 2){
        note2 = amount / 2;
        amount -= note2 * 2;
    }
    printf("Total number of notes: \n");
    printf("1000 = %d", note1000);
    printf("500 = %d",note500);
    printf("200 = %d", note200);
    printf("100 = %d",note100);
    printf("50 = %d", note50);
    printf("20 = %d",note20);
    printf("10 = %d", note10);
    printf("5 = %d",note5);
    printf("2 = %d", note2);
    printf("1 = %d",note1);

    printf("\n==================================\n");

    return 0;
}