#include <stdio.h>

int main()
{
    int taxable_income , age;
    float tax;
    char user_gender, req_gender = 'M';
    printf("\nEnter Your Gender ( M / F ) ");
    scanf("%c", &user_gender);

    if (user_gender == req_gender)
    {
        printf("\n Enter The Age ");
        scanf("%d", &age);

        if (age <= 65)
        {
            printf("\n Enter Taxable Income ");
            scanf("%d", &taxable_income);

            if ( taxable_income < 160000 ) 
            {
                printf("\nNo Tax to pay");
            }
            else if (taxable_income > 160000 && taxable_income < 500000)
            {
                tax = ( taxable_income - 160000 ) * 0.1  ;
                printf("You have to pay tax of Rupee %.2f" , tax ) ;
            }
            else if (taxable_income > 500000 && taxable_income < 800000)
            {
                tax = ( ( taxable_income - 500000 ) * 0.2 ) + 34000 ;
                printf("You have to pay tax of Rupee %.2f" , tax ) ;
            }
            else if (taxable_income > 800000 )
            {
                tax = ( ( taxable_income - 800000 ) * 0.3 ) + 94000 ;
                printf("You have to pay tax of Rupee %.2f" , tax ) ;
            }
        }
        else if ( age > 65 )
        {
            printf("\nNo tax To Pay ");
        }
        
    }
    else if ( user_gender != req_gender )
    {
        printf("\n No Tax");
    }
    return 0;
}