#include <stdio.h>

int main() {
    int fahr, celsius;
    int lower, upper, step;

    upper = 300;
    step = 20;
    
    fahr = lower;
    for(lower=0; fahr <= upper; fahr += step) {
        celsius = 5  * (fahr-32) / 9;
        printf("Fahrenheit %d - Celsius %d\n", fahr, celsius);
    }
}