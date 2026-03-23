#include <stdio.h>
#include<math.h>

/* Function Declaration */
void discriminant_01( int x, int y, int z, double a);
void discriminant_02( int x, int y, int z, double a);

/* Function Redeclaration */
void discriminant_01( int x, int y, int z, double a){
    float k1, k2;
    printf("\n The roots are real and unequal");
    k1 = ((-y) + sqrt(a)) / (2 * x) ;
    k2 = ((-y) - sqrt(a)) / (2 * x) ;
    printf("\n1st Root = %.2f", k1);
    printf("\n2nd Root = %.2f", k2);
}
void discriminant_02( int x, int y, int z, double a){
    float k;
    printf("\nThe roots are real and equal");
    k = ((-y) + sqrt(a)) / (2 * x) ;
    printf("\n1st Root = %.2f", k);
    printf("\n2nd Root = %.2f", k);
}

/* Main Program */
int main(){
    int coff01, coff02, coff03;
    double discriminant_calc;
    printf("--- (A*X^2) + (B*X) + c ---");
    printf("\nEnter the value of A"), scanf("%d", &coff01 );
    printf("\nEnter the value of B"), scanf("%d", &coff02 );
    printf("\nEnter the value of C"), scanf("%d", &coff03 );
    discriminant_calc = pow(coff02 , 2) - (4 * coff01 * coff03);
    /* printf("\n%.2f", discriminant_calc); */
    printf("\n--- (%d*X^2) + (%d*X) + (%d) ---", coff01, coff02, coff03);
    if (discriminant_calc > 0)
    {
        discriminant_01(coff01, coff02, coff03, discriminant_calc);
    }
    else if (discriminant_calc == 0)
    {
        discriminant_02(coff01, coff02, coff03, discriminant_calc);
    }
    else{
        printf("\n1st Root & 2nd Root Complex Roots");
    }
    return 0;
}