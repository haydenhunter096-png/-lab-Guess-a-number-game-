#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char name[50];
    int secretNumber;
    int guess = 0;
    int turns = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a number between 1 and 100
    secretNumber = (rand() % 100) + 1;

    // Ask for user's name
    printf("Hi, what is your name? ");
    scanf("%s", name);

    printf("Nice to meet you %s. Let's play a game!\n", name);

    // Uncomment this line while testing
    // printf("DEBUG: secret number is %d\n", secretNumber);

    // Game loop
    while (guess != secretNumber) {
        printf("Please guess a number: ");
        scanf("%d", &guess);

        turns++;

        if (guess > secretNumber) {
            printf("Too high\n");
        }
        else if (guess < secretNumber) {
            printf("Too low\n");
        }
        else {
            printf("You got it!\n");
        }
    }

    printf("It took you %d turns.\n", turns);

    if (turns < 7) {
        printf("Very good performance!\n");
    }
    else if (turns == 7) {
        printf("Average performance.\n");
    }
    else {
        printf("Poor performance.\n");
    }

    printf("Great job!\n");

    return 0;
}
