//area of rectangle = length * width;
//আয়তক্ষেত্রের ক্ষেত্রফল নির্ণয়ের জন্য C program
#include<stdio.h>
int main()

{
    float length, width, area;
    printf("Enter length = ");
    scanf("%f",&length);

    printf("Enter width = ");
    scanf("%f",&width);

    area = length * width;
    printf("area of rectangle = %.2f\n", area);



    getch();
    return 0;
}

