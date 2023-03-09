// ৩ টি পূর্ণ সংখ্যার যোগফল ও গড় নির্ণয়ের জন্য C program
#include<stdio.h>
int main()

{
    int num1, num2, num3, sum;

    float avg;

    printf("Enter three number : ");
    scanf("%d %d %d",&num1, &num2,&num3);


    sum = num1 + num2 + num3;

    avg = (float)sum/3;

    printf("sum is = %d\n",sum);

    printf("avgarage = %f\n",avg);



    getch();
    return 0;
}


