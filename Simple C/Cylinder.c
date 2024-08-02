/*6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2pr
2 + 2prh, volume = p r 2 h). Define a constant variable pi=3.14*/

#include <stdio.h>
#define pi 3.142
int main() {
    float radius, height, surface_area, volume;
    printf("Enter the radius:");
    scanf("%f",&radius);
    
    printf("Enter the height:");
    scanf("%f",&height);
    
    volume = pi*radius*radius*height;
    surface_area = 2*pi*radius*height+ 2*pi*radius*radius;
    
    printf("surface area of cylinder is %.2f\n", surface_area);
    printf("volume of cylinder is %.2f", volume);
    return 0;
}

