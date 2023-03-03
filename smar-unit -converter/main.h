#include<stdio.h>
/*
1 meter = 3.2808 feet;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.
m, g or c (for meters, grams or degrees Celsius).
*/
int main(void) {
    int number;
    int i;
    scanf("%d", &number);
    
    for(i = 0; i < number; i++) {
        double number;
        char action;
        char *output = "ft";
        double result =0;
        scanf("%lf %c", &number, &action);
        
        if(action == 'm') {
            result = number * 3.2808;
            output = "ft";
        } else if (action == 'g') {
            result = number * 0.002205;
            output = "lbs";
        } else if(action == 'c') {
            result = 32 + 1.8 * number;
            output = "f";
        }
        printf("%.6f %s \n", result, output);
    }
    
    return 0;
}


/*SOLuTION*/
#include <stdio.h>

double metersToFeet(double meters);
double gramsToPounds(double grams);
double celsiusToFahrenheit(double celsius);

int main(void) {
    int nbConversions, iConv;
    double value;
    char unit;
    
    scanf("%d", &nbConversions);
    for (iConv = 0; iConv < nbConversions; iConv = iConv + 1) {
        scanf("%lf %c", &value, &unit);
        if (unit == 'm'){
                printf("%lf ft\n", metersToFeet(value));
        } else if (unit == 'g'){
                printf("%lf lbs\n", gramsToPounds(value));
        }
        else if (unit == 'c'){
                printf("%lf f\n", celsiusToFahrenheit(value));
        }
    }
    return(0);
}

double metersToFeet(double meters)
{
    double feet_per_meter = 3.2808;
    return meters*feet_per_meter;
}
 
double gramsToPounds(double grams)
{
    double pounds_per_gram = .002205;
    return grams * pounds_per_gram;
}
 
double celsiusToFahrenheit(double celsius)
{
    double fahrenheit_per_celsius = 1.8;
    double zero_celsius_in_fahrenheit = 32;
    return celsius * fahrenheit_per_celsius + zero_celsius_in_fahrenheit;
}
