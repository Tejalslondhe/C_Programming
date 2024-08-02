/*7. Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32), K = C +273.15)*/

#include <stdio.h>

int main() {
    float temperature, Celsius,Kelvin;
    
    printf("Enter the temperature in fahrenheit:");
    scanf("%f",&temperature);
    
    Celsius = (5.0/9.0)*(temperature - 32);
    Kelvin = Celsius + 273.15;
    
    printf("Temperature in Celsius %.2f\n", Celsius);
    printf("Temperature in Kelvin %.2f", Kelvin);

    return 0;
}

