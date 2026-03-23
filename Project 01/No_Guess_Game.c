#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator with current time as seed
    srand(time(0)); 

    // Generate a random number
    int number = (rand() % 100) + 1;

    // Print the random number
    // printf("Generated Random Number: %d\n", number);
    int no_of_guess = 0 , guessed ;

    do
    {
        printf("\nGuess The Number ");
        scanf("%d" , &guessed);
        if ( guessed > number ){
            printf("\n%d is greater " , guessed );

        }
        else if ( guessed < number )
        {
            printf("\n%d is lower " , guessed );
        }
        
        no_of_guess++;
    } while ( guessed != number );
    
    printf("\nYou Took %d chances to guess th number %d " , no_of_guess , number );

    return 0;
}
