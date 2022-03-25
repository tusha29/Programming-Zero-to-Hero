#include <stdio.h>

int main(){

        printf("\n==================================\n");

        int givenAngle1, givenAngle2, givenAngle3;

        printf("Enter three angles of a triangle: \n");
        scanf("%d%d%d", &givenAngle1, &givenAngle2, &givenAngle3);

        if(givenAngle1 == givenAngle2 == givenAngle3){
            printf("The triangle is equilateral.");
        }
        else if(givenAngle1 == givenAngle2 || givenAngle2 == givenAngle3 || givenAngle1 == givenAngle3){
            printf("The triangle is isosceles.");
        }
        else{
            printf("The triangle is scalene triangle.");
        }
        printf("\n==================================\n");

    return 0;
}