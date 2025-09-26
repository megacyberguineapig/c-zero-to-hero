/* This program's purpose is to get user input (Fahrenheit) and convert it to Celsius. C = (F - 32.0) * 5/9 */
#include <stdio.h>
int main(void){
    double fahr, celsius;
    printf("Please input a number in Fahrenheit. ");
    scanf("%lf", &fahr);
    celsius = (fahr - 32.0) * 5.0 / 9.0;
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahr, celsius );
    return 0;
}