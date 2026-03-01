#include <stdio.h>

int temp_convert() {
    
    
}

/*
1. float celsius_to_fahrenheit (float celsius)
Converts Celsius to Fahrenheit using the formula: F = (9/5)C + 32
2. float fahrenheit_to_celsius (float fahrenheit)
Converts Fahrenheit to Celsius using the formula: C = (5/9)(F - 32)
3. float celsius_to_kelvin (float celsius)
Converts Celsius to Kelvin using the formula: K = C + 273.15
4. float kelvin_to_celsius (float kelvin)
Converts Kelvin to Celsius using the formula: C = K - 273.15
*/

int main() {

    char temp_in, temp_out;
    float temperature_in, temperature_out;

    printf("Enter the initials (F,C,K), Choose the temperature scale of the input value (Fahrenheit, Celsius, or Kelvin): ");
    temp_in = getchar();
    printf("Enter the initials (F,C,K), Choose the temperature scale of the output value (Fahrenheit, Celsius, or Kelvin): ");
    temp_out = getchar();

    printf("Enter the temperature: ");
    scanf("%f",temperature_in);
    

    return 0;
}