#include<stdio.h>

float CtoF(float celcius){
    return (celcius * 9/5) + 32;
} 

float FtoC(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}

float CtoK(float celcius){
    return celcius + 273.15;
}

float KtoC(float kelvin){
    return kelvin - 273.15;
}

void main(){
    float cTemp1, cTemp2, fTemp3, fTemp4, kTemp5, kTemp6;
    
    printf("Enter 2 temperatures in Celcius: ");
    scanf("%f %f", &cTemp1, &cTemp2);

    printf("Enter 2 temperatures in Fahrenheit: ");
    scanf("%f %f", &fTemp3, &fTemp4);

    printf("Enter 2 temperatures in Kelvin: ");
    scanf("%f %f", &kTemp5, &kTemp6);

    printf("Temperature conversions are as follows: \n");
    printf("1. Celcius(%.2f) to Fahrenheit(%.2f)\n", cTemp1, CtoF(cTemp1));
    printf("2. Celcius(%.2f) to Fahrenheit(%.2f)\n", cTemp2, CtoF(cTemp2));

    printf("3. Fahrenheit(%.2f) to Celcius(%.2f)\n", fTemp3, FtoC(fTemp3));
    printf("4. Fahrenheit(%.2f) to Celcius(%.2f)\n", fTemp4, FtoC(fTemp4));

    printf("5. Celcius(%.2f) to Kelvin(%.2f)\n", cTemp1, CtoK(cTemp1));
    printf("6. Celcius(%.2f) to Kelvin(%.2f)\n", cTemp2, CtoK(cTemp2));

    printf("7. Kelvin(%.2f) to Celcius(%.2f)\n", kTemp5, KtoC(kTemp5));
    printf("8. Kelvin(%.2f) to Celcius(%.2f)\n", kTemp6, KtoC(kTemp6));
}