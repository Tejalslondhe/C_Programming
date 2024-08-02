/*4. Accept radius from the user and write a program having menu with the following options and
corresponding actions:
1. Area of Circle
2. Circumference of Circle
3. Volume of Sphere*/


#include <stdio.h>
#define  pi 3.142

int main()
{
    int case_no;
    float radius, area,circum,volume;
    
    printf("Enter the radius:");
    scanf("%f",&radius);
    
    printf("Case1: Find the area of circle\n");
    printf("Case2: Find the circumference of circle\n");
    printf("Case3: Find the volume of sphere\n");
    
    printf("Choose the case:");
    scanf("%d",&case_no);
    
    switch(case_no)
    {
        case 1:
        area = pi*radius*radius;
        printf("Area of circle is %.2f",area);
        break;
        
        case 2:
        circum = 2*pi*radius;
        printf("Circumference of circle is %.2f",circum);
        break;
        
        case 3:
        volume = 4/3*pi*radius*radius*radius;
        printf("Volume of sphere is %.2f",volume);
        break;
    }
    
    return 0;
}

