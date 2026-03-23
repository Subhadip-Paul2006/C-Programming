#include <stdio.h>

int main(){
    float celcius , ferenhite;
    printf("Enter the Temperature in Celcius ");
    scanf("%f", &celcius);
    printf("\n%f Celcius is %f in Ferenhite ", celcius, (1.8*celcius)+32);
    return 0;
}