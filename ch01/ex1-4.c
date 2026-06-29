#include <stdio.h>

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    step = 20;
    upper = 300;

    celsius = lower;
    printf("%8s %8s\n", "Celsius", "Fahr"); 
    while(celsius <= upper){
        fahr = (9.0/5.0)*celsius + 32.0;
        printf("%8f %8f\n", fahr, celsius);
        celsius = celsius + step;
    }
    return 0;
}