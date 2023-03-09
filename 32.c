//Fahrenheit to Centigrade C program
// C = (F-32)/1.8
#include<stdio.h>
int main()

{
    float c, f;
    printf("Enter Centigrade = ");
    scanf("%f",&f);

    c = (f-32)/1.8;
    printf(" Enter Fahrenheit = %.2f\n",c);



    getch();
    return 0;
}

