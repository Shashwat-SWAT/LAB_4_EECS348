#include <stdio.h>
#include <ctype.h> // lets me use tolower(), tohigher()

/*
Converts Celsius to Fahrenheit using the formula: F = (9.0/5.0)C + 32
Converts Fahrenheit to Celsius using the formula: C = (5.0/9.0)(F - 32)
Converts Celsius to Kelvin using the formula: K = C + 273.15
Converts Kelvin to Celsius using the formula: C = K - 273.15
*/

float any_to_Celsius(char initial_type_tmp, float tmp_val) {

    float out_temp;

    if (initial_type_tmp == 'f') {
        //C = (5.0/9.0)(F - 32)
        out_temp = (5.0/9.0)*(tmp_val - 32);
    }

    else if (initial_type_tmp == 'k') {
        //C = K - 273.15
        out_temp = tmp_val - 273.15;
    }

    else {
        out_temp = tmp_val;
    }

    return out_temp;
}

float any_to_Kelvin(char initial_type_tmp, float tmp_val) {

    float out_temp;

    if (initial_type_tmp == 'c') {
        //K = C + 273.15
        out_temp = tmp_val + 273.15;
    }

    else if (initial_type_tmp == 'f') {
        //C = (5.0/9.0)(F - 32)
        //K = C + 273.15
        tmp_val = (5.0/9.0)*(tmp_val - 32);
        out_temp = tmp_val + 273.15;
    }

    else {
        out_temp = tmp_val;
    }

    return out_temp;
}

float any_to_Fahrenheit(char initial_type_tmp, float tmp_val) {

    float out_temp;

    if (initial_type_tmp == 'c') {
        //F = (9.0/5.0)C + 32
        out_temp = (9.0/5.0)*tmp_val + 32;
    }

    else if (initial_type_tmp == 'k') {
        //C = K - 273.15
        //F = (9.0/5.0)C + 32
        tmp_val = tmp_val - 273.15;
        out_temp = (9.0/5.0)*tmp_val + 32;
    }

    else {
        out_temp = tmp_val;
    }

    return out_temp;

}

// End of conversion functions~

float temp_convert(char in_t, char out_t, float in_temp) {

    float out_temp;

    if (out_t == 'f') {
        out_temp = any_to_Fahrenheit (in_t, in_temp);
    }

    else if (out_t == 'c') {
        out_temp = any_to_Celsius (in_t, in_temp);
    }

    else { //kelvin
        out_temp = any_to_Kelvin (in_t, in_temp);
    }

    return out_temp;
}
// main functions that uses other minor functions to conversion ends here.

void caution_print(char ini_tmp, float temp_val) {
    
    /*
    • Freezing: Below 0°C (or equivalent in other scales)
    • Cold: 0°C to 10°C (or equivalent)
    • Comfortable: 10°C to 25°C (or equivalent)
    • Hot: 25°C to 35°C (or equivalent)
    • Extreme Heat: Above 35°C (or equivalent)
    */

    temp_val = any_to_Celsius(ini_tmp, temp_val);
    printf("\n");
    
    if (temp_val < 0) {
        printf ("It is freezing outside! Better not go anywhere!");
    }

    else if (temp_val <= 10) {
        printf ("It's pretty cold, wear a jacket before you head out.");
    }

    else if (temp_val <= 25) {
        printf ("Good weather today!");
    }

    else if (temp_val <= 35) {
        printf ("Dont forget the sunscreen!");
    }

    else {
        printf ("Heat waves! Stay indoors!");
    }
}

void type_check(char*temp_in_type, char*temp_out_type);

void type_check(char*temp_in_type, char*temp_out_type) {

    int condition = !(((*temp_in_type == 'c') || (*temp_in_type == 'k') || (*temp_in_type == 'f')) && ((*temp_out_type == 'c') || (*temp_out_type == 'k') || (*temp_out_type == 'f')));
    
    // (((*temp_in_type == 'c') || (*temp_in_type == 'k') || (*temp_in_type == 'f')) && ((*temp_out_type == 'c') || (*temp_out_type == 'k') || (*temp_out_type == 'f')));
    while (condition) {
        printf("Warning! Wrong input for either input and output type!\n");
        printf("Enter the initials (F,C,K), Choose the temperature scale of the input value (Fahrenheit, Celsius, or Kelvin): ");
        scanf(" %c", temp_in_type);
        *temp_in_type = tolower(*temp_in_type);
        
        printf("Enter the initials (F,C,K), Choose the temperature scale of the output value (Fahrenheit, Celsius, or Kelvin): ");
        scanf(" %c", temp_out_type);
        *temp_out_type = tolower(*temp_out_type);
        condition = !(((*temp_in_type == 'c') || (*temp_in_type == 'k') || (*temp_in_type == 'f')) && ((*temp_out_type == 'c') || (*temp_out_type == 'k') || (*temp_out_type == 'f')));
    }
    
}

int main() {

    char temp_in, temp_out;
    float temperature_in, temperature_out;

    printf("Enter the initials (F,C,K), Choose the temperature scale of the input value (Fahrenheit, Celsius, or Kelvin): ");
    scanf("%c", &temp_in);
    temp_in = tolower(temp_in);
    
    printf("Enter the initials (F,C,K), Choose the temperature scale of the output value (Fahrenheit, Celsius, or Kelvin): ");
    scanf(" %c", &temp_out);
    temp_out = tolower(temp_out);

    type_check(&temp_in, &temp_out);
    
    printf("Enter the temperature: ");
    scanf(" %f", &temperature_in);

    temperature_out = temp_convert(temp_in, temp_out, temperature_in);

    printf("%2.2f %2c is %2.2f %2c", temperature_in, temp_in, temperature_out, temp_out);
    caution_print(temp_in, temperature_in);

    return 0;
}