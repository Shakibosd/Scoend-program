// Centigrade to Fahrenheit C program
// F = (c * 1.8)+32
#include<stdio.h>
int main()

{
    float c, f;
    printf("Enter Centigrade = ");
    scanf("%f",&c);

    f =  (c * 1.8) +32;
    printf("Enter Fahrenheit = %.2f",f);


    getch();
    return 0;
}


