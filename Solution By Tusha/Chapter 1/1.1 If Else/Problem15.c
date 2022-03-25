#include <stdio.h>

int main(){

        printf("\n==================================\n");

        int givenAngle1, givenAngle2, givenAngle3, sum;


        printf("Enter three angles of a triangle: \n");
        scanf("%d%d%d", &givenAngle1, &givenAngle2, &givenAngle3);
        sum = givenAngle1 + givenAngle2 + givenAngle3;

        if(sum == 180 && givenAngle1 > 0 && givenAngle2 > 0 && givenAngle3 > 0)
        {
            printf("The triangle is valid.");
        }
        else{
            printf("The triangle is not valid");
        }
        
        printf("\n==================================\n");

    return 0;
}