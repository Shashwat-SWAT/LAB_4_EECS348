#include <stdio.h>
#include <ctype.h> // lets me use tolower(), tohigher()

/*
Converts Celsius to Fahrenheit using the formula: F = (9/5)C + 32
Converts Fahrenheit to Celsius using the formula: C = (5/9)(F - 32)
Converts Celsius to Kelvin using the formula: K = C + 273.15
Converts Kelvin to Celsius using the formula: C = K - 273.15
*/

int any_to_celcius(char chg_type_tmp, float tmp_val) {

    float out_temp;

    if (chg_type_tmp == 'f') {
        //C = (5/9)(F - 32)
    }

    else if (chg_type_tmp == 'k') {
        //C = K - 273.15
    }

    else {

    }
}

int any_to_kelvin(char chg_type_tmp, float tmp_val) {

    float out_temp;

    if (chg_type_tmp == '')

}

int any_to_Fahrenheit(char chg_type_tmp, float tmp_val) {

}

int temp_convert(char in_t, char out_t, float in_temp) {

    float out_temp;

    if (in_t == out_t) {
        out_temp = in_temp;
    }

    if (out_t == 'f') {

    }

    else if (out_t == 'c') {

    }

    else { //kelvin

    }
}

int main() {

    char temp_in, temp_out;
    float temperature_in, temperature_out;

    printf("Enter the initials (F,C,K), Choose the temperature scale of the input value (Fahrenheit, Celsius, or Kelvin): ");
    temp_in = tolower(getchar());
    printf("Enter the initials (F,C,K), Choose the temperature scale of the output value (Fahrenheit, Celsius, or Kelvin): ");
    temp_out = tolower(getchar());

    printf("Enter the temperature: ");
    scanf("%f",temperature_in);
    

    return 0;
}