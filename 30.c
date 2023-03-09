// বৃওের পরিধি নির্ণয়ের জন্য c program.
//2πr
// 2 * 3.1416 * radius
#include<stdio.h>
int main()

{
    float radius, area;
    printf("Enter radius = ");
    scanf("%f",&radius);

    area = 2 * 3.1416 * radius;
    printf("the area of circle = %.2f\n",area);



    getch();
    return 0;
}

