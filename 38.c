// Math | x raised to the power y (x^y)
#include<stdio.h>
int main()

{
    //user input
    int x,y;
    printf("Enter x = ");
    scanf("%d",&x);

    printf("Enter y = ");
    scanf("%d",&y);

    double result = pow(x,y);
    printf("Enter the number = %.1lf\a",result);

    getch();
    return 0;


    /*
    double result = pow(5,3);
    printf("Enter the number = %.1lf\a",result);

    getch();
    return 0;*/
}


