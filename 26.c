// ত্রিভুজের ক্ষেত্রফল নির্ণয়ের জন্য C program
#include<stdio.h>
int main()

{
    float base , height, area;
    printf("Enter base  = ");
    scanf("%f",&base);

    printf("Enter height = ");
    scanf("%f",&height);

    area = 0.5 * base * height;
    printf("Area of triangle = %.1f\n",area);



    getch();
    return 0;
}

