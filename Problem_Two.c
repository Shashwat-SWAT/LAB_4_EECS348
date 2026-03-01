int temp_convert() {
    //
}

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