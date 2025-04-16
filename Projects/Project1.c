/*
PROJECT 1: NUMBER GUESSING GAME 
We will write a program that generates a random number and asks the player to guess 
it. If the player’s guess is higher than the actual number, the program displays “Lower 
number please”. Similarly, if the user’s guess is too low, the program prints “Higher 
number please”. 
When the user guesses the correct number, the program displays the number of 
guesses the player used to arrive at the number. 
Hint: Use loop & use a random number generator. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void number_guessing_game() {
    int random_number, guess, attempts = 0;
    srand(time(0));  // Seed for random number generation
    random_number = rand() % 100 + 1;  // Generate random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");
    printf("Your goal is to guess the number.\n");

    // Loop until the user guesses the correct number
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < random_number) {
            printf("Higher number, please.\n");
        } else if (guess > random_number) {
            printf("Lower number, please.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;  // Exit the loop when the correct number is guessed
        }
    }

    printf("Thank you for playing!\n");
}

int main() {
    number_guessing_game();
    return 0;
}
