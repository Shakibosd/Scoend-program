//How to swap two numbers with temporary variable
#include<stdio.h>
int main()

{
    int num1 = 100;
    int num2 = 200;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Enter First Number = %d\n",num1);
    printf("Enter Second Number = %d\a",num2);


    getch();
    return 0;
}

