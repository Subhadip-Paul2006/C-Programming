#include <stdio.h>
#include <math.h>

#define PI 3.14159265

// Function Declarations
void addition();
void subtraction();
void multiplication();
void division();
void sin_f();
void cos_f();
void tan_f();
void cosec_f();
void sec_f();
void cot_f();
void inv_sin();
void inv_cos();
void inv_tan();
void power();
void natural_log();
void log_10();
void squareroot();

void addition() {
    int a, b;
    printf("\nEnter the 1st number: "); scanf("%d", &a);
    printf("\nEnter the 2nd number: "); scanf("%d", &b);
    printf("\nThe sum is: %d\n", a + b);
}

void subtraction() {
    int a, b;
    printf("\nEnter the 1st number: "); scanf("%d", &a);
    printf("\nEnter the 2nd number: "); scanf("%d", &b);
    printf("\nThe subtraction result is: %d\n", a - b);
}

void multiplication() {
    int a, b;
    printf("\nEnter the 1st number: "); scanf("%d", &a);
    printf("\nEnter the 2nd number: "); scanf("%d", &b);
    printf("\nThe multiplication result is: %d\n", a * b);
}

void division() {
    double a, b;
    printf("\nEnter the 1st number: "); scanf("%lf", &a);
    printf("\nEnter the 2nd number: "); scanf("%lf", &b);
    
    if (b == 0) {
        printf("\nError! Division by zero is not allowed.\n");
        return;
    }
    
    printf("\nThe division result is: %.4lf\n", a / b);
}

void sin_f() {
    double a, radians;
    printf("\nEnter the degree: "); scanf("%lf", &a);
    radians = a * (PI / 180.0);
    printf("sin(%.2lf) = %.4lf\n", a, sin(radians));
}

void cos_f() {
    double a, radians;
    printf("\nEnter the degree: "); scanf("%lf", &a);
    radians = a * (PI / 180.0);
    printf("cos(%.2lf) = %.4lf\n", a, cos(radians));
}

void tan_f() {
    double a, radians;
    printf("\nEnter the degree: "); scanf("%lf", &a);
    radians = a * (PI / 180.0);
    printf("tan(%.2lf) = %.4lf\n", a, tan(radians));
}

void cosec_f() {
    double a, radians;
    printf("\nEnter the degree: "); scanf("%lf", &a);
    radians = a * (PI / 180.0);
    printf("cosec(%.2lf) = %.4lf\n", a, 1 / sin(radians));
}

void sec_f() {
    double a, radians;
    printf("\nEnter the degree: "); scanf("%lf", &a);
    radians = a * (PI / 180.0);
    printf("sec(%.2lf) = %.4lf\n", a, 1 / cos(radians));
}

void cot_f() {
    double a, radians;
    printf("\nEnter the degree: "); scanf("%lf", &a);
    radians = a * (PI / 180.0);
    printf("cot(%.2lf) = %.4lf\n", a, 1 / tan(radians));
}

void inv_sin() {
    double a, degree;
    printf("\nEnter the value (-1 to 1): "); scanf("%lf", &a);

    if (a < -1 || a > 1) {
        printf("Invalid input! asin() is only defined for values between -1 and 1.\n");
        return;
    }

    degree = asin(a) * (180.0 / PI);
    printf("asin(%.2lf) = %.4lf degrees\n", a, degree);
}

void inv_cos() {
    double a, degree;
    printf("\nEnter the value (-1 to 1): "); scanf("%lf", &a);

    if (a < -1 || a > 1) {
        printf("Invalid input! acos() is only defined for values between -1 and 1.\n");
        return;
    }

    degree = acos(a) * (180.0 / PI);
    printf("acos(%.2lf) = %.4lf degrees\n", a, degree);
}

void inv_tan() {
    double a, degree;
    printf("\nEnter the value: "); scanf("%lf", &a);

    degree = atan(a) * (180.0 / PI);
    printf("atan(%.2lf) = %.4lf degrees\n", a, degree);
}

void power() {
    double a, p;
    printf("\nEnter the number: "); scanf("%lf", &a);
    printf("\nEnter the exponent: "); scanf("%lf", &p);
    printf("%.2lf^%.2lf = %.4lf\n", a, p, pow(a, p));
}

void natural_log() {
    double a;
    printf("\nEnter the value: "); scanf("%lf", &a);

    if (a <= 0) {
        printf("\nError! log() is not defined for zero or negative values.\n");
        return;
    }

    printf("\nThe natural log is: %.4lf\n", log(a));
}

void log_10() {
    double a;
    printf("\nEnter the value: "); scanf("%lf", &a);

    if (a <= 0) {
        printf("\nError! log10() is not defined for zero or negative values.\n");
        return;
    }

    printf("\nThe log base 10 is: %.4lf\n", log10(a));
}

void squareroot() {
    double a;
    printf("\nEnter the value: "); scanf("%lf", &a);

    if (a < 0) {
        printf("\nError! sqrt() is not defined for negative values.\n");
        return;
    }

    printf("\nThe square root is: %.4lf\n", sqrt(a));
}

int main() {
    int choice;
    
    while (1) {  // Loop to repeat the menu until the user exits
        printf("\n------------------- CALCULATOR -------------------\n");
        
        printf("(1) Addition\n(2) Subtraction\n(3) Multiplication\n(4) Division\n");
        printf("(5) Sin\n(6) Cos\n(7) Tan\n(8) Cosec\n(9) Sec\n(10) Cot\n");
        printf("(11) Inverse Sin\n(12) Inverse Cos\n(13) Inverse Tan\n");
        printf("(14) Power\n(15) Natural Logarithm\n(16) Logarithm Base 10\n(17) Square Root\n");
        printf("(0) Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addition(); break;
            case 2: subtraction(); break;
            case 3: multiplication(); break;
            case 4: division(); break;
            case 5: sin_f(); break;
            case 6: cos_f(); break;
            case 7: tan_f(); break;
            case 8: cosec_f(); break;
            case 9: sec_f(); break;
            case 10: cot_f(); break;
            case 11: inv_sin(); break;
            case 12: inv_cos(); break;
            case 13: inv_tan(); break;
            case 14: power(); break;
            case 15: natural_log(); break;
            case 16: log_10(); break;
            case 17: squareroot(); break;
            case 0: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
