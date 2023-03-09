//How to swap two numbers without temporary variable
#include<stdio.h>
int main()

{
    int num1 = 10;
    int num2 = 20;

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;


    printf("Enter First Number = %d\n",num1);
    printf("Enter Second Number = %d\a",num2);


    getch();
    return 0;
}


