#include <stdio.h>

int main(){

        printf("\n==================================\n");

            int givenAngle1, givenAngle2, givenAngle3;

            printf("Enter angles of a triangle: \n");
            scanf("%d%d%d", &givenAngle1, &givenAngle2, &givenAngle3);

            if(givenAngle2 + givenAngle3 > givenAngle1){
                printf("This triangle is valid.");
            }
            else if(givenAngle1 + givenAngle3 > givenAngle2){
                printf("This triangle is valid.");
            }
            else if(givenAngle1 + givenAngle2 > givenAngle3){
                printf("This triangle is valid.");
            }
            else{
                printf("This triangle is not valid.");
            }

        printf("\n==================================\n");

        return 0;

}