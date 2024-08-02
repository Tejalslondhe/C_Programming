/*1. Accept the radius from user and compute the area and circumference of a circle.*/

#include<stdio.h>
#define pi 3.142
int main()
{
    int radius;
    float area, circum;
    printf("Enter the radius:\n");
    scanf("%d",&radius);
    
    area = pi*radius*radius;
    circum = 2*pi*radius;
    
    printf("Area of circle is:%f",area);
    printf("Circumference of circle is:%f",circum);
    
    return 0;
}
    
