#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1, guess, number_of_guesses = 1;
    printf("Guess the number between 1 to 100 :- \n");
    do
    {
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please ! \n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please ! \n");
        }
        else
        {
            printf("Wow ! You guessed it correct ! %d is the correct guess ! You guessed it in %d attempts.", number, number_of_guesses);
        }

        number_of_guesses++;

    } while (guess != number);

    return 0;
}