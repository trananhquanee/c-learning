#include <stdio.h>

/* int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    printf("%8s %8s\n", "Fahr", "Celsius"); 
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%8.0f %8.1f\n", fahr, celsius); 
        fahr = fahr - step;
    }
    return 0;
} */

int main(void){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 10;
    
    printf("%8s\t%8s\n", "Fahr", "Celsius");
    for(fahr = upper; fahr >= lower; fahr = fahr - step){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%8.1f\t%8.1f\n", fahr, celsius);
    }
    return 0;
}