// area = sqrt(s*(s-a)*(s-b)*(s-c))
// s = (a+b+c)/2
//  ত্রিভুজের ৩ বাহুর দৈর্ঘ্য এর ক্ষেত্রফল নির্ণয়ের জন্য C program
#include<stdio.h>
int main()

{
    double a, b , c, s , area;
    printf("Enter three value = ");
    scanf("%lf %lf %lf", &a, &b, &c);

    s = (a+ b+ c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle = %.2lf\n",area);



    getch();
    return 0;
}

