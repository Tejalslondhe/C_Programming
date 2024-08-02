#include <stdio.h>
int main(){
    int radius;
    float area, circum;
    printf("Enter the radius:");
    scanf("%d", &radius);
    area = 3.142*radius*radius;
    circum = 2*3.142*radius;
    printf("Area of circle is %.2f\n",area);
    printf("Circumference of circle is %.2f",circum);
    return 0;
}

