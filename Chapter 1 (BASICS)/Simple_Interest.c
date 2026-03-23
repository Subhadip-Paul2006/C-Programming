#include <stdio.h>

int main(){
    float principle , rate , time;
    float simple_interest;
    printf("Enter the Principle Amount ");
    scanf("%f", &principle);
    printf("Enter the Rate Of Interest ");
    scanf("%f", &rate);
    printf("Enter the Time (In Years) ");
    scanf("%f", &time);
    simple_interest = ( principle * rate * time ) / 100;
    printf("The Simple Interest is %f ", simple_interest );
    return 0;
}