#include <stdio.h>

int main(){

        printf("\n==================================\n");

        int sellingPrice, costPrice, amount;

        printf("Enter your cost price: ");
        scanf("%d",&costPrice);
        printf("Enter your selling price: ");
        scanf("%d", &sellingPrice);

        if(sellingPrice > costPrice){
            amount = sellingPrice - costPrice ;
            printf("Profit %d", amount);
        }
        else if(costPrice > sellingPrice){
            amount = costPrice - sellingPrice ;
            printf("Loss %d", amount);
        }
        else{
            printf("There is no profit no loss");
        }

        printf("\n==================================\n");

    return 0;
}