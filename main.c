#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main()
{
    // 1. Seed the random number generator (do this ONCE at the start)
    srand(time(NULL));

    // 2. Generate a number between 1 and 100
    int Random_number = (rand() % 100) + 1;

    printf("Random number is: %d\n", Random_number);
    int user_guess;  //initialized user variable for the user to input his guess
    int gusses_by_user = 1; //user guess counter how many time the interpretion in loops run, value set to one for first try guesses

    while (user_guess != Random_number)//initilization of the loop 
    {
        printf("Guess the number between 1 and 100: ");
        scanf("%d", &user_guess);

        if (user_guess > Random_number)//if the user guess is higher than the random number
        {
            printf("LOWER NUMBER PLEASE!\n");
        }

        else if (user_guess < Random_number)//if the guess is lower than the random number 
        {
            printf("HIGHER NUMBER PLEASE!\n");
        }

        else// if the user guesses the number right
        {
            printf("CONGRATS \n YOU GUESSED THE NUMBER RIGHT IN %d GUESSES", gusses_by_user);//print the how many gusses it took the user by using how many time the interpretion in the loop ran 
        }

        gusses_by_user++;//increase the iterpretion of loop by 1 on every run 
    }

    return 0;
}