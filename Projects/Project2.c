/*
PROJECT 2: SNAKE, WATER, GUN 
Snake, water, gun or rock, paper, scissors is a game most of us have played during 
school time. (I sometimes play it even now). 
Write a C program capable of playing this game with you. 
Your program should be able to print the result after you choose snake/water or gun.
*/


/*
Inputs may be:
Rock/Snake
Paper/Water 
Scissor/Gun
Sure! In the Snake, Water, Gun game (a fun variant of Rock, Paper, Scissors), there are 3 choices:

🐍 Snake

💧 Water

🔫 Gun

Each player picks one, and the outcome is decided based on the following rules:

🎮 Rules:
Snake drinks Water → Snake wins
Water douses Gun → Water wins
Gun kills Snake → Gun wins
Same choices → Draw

✅ All Possible Player vs Computer Input Combinations (9 Total)
Player	Computer	Result
Snake	Snake	    Draw
Snake	Water	    Player Wins
Snake	Gun	        Computer Wins
Water	Snake	    Computer Wins
Water	Water	    Draw
Water	Gun	        Player Wins
Gun	    Snake	    Player Wins
Gun	    Water	    Computer Wins
Gun	    Gun	        Draw

*/

#include <stdio.h>
#include <stdlib.h>  // for rand, srand
#include <time.h>    // for time

int main() {
    char comp_in[] = {'s', 'w', 'g'}; // s = snake, w = water, g = gun
    char in;
    int randomIndex;

    // Seed random number generator
    srand(time(NULL));

    // Generate random index between 0 and 2
    randomIndex = rand() % 3;
    char comp = comp_in[randomIndex];

    // Input from user
    printf("Welcome to the Snake-Water-Gun game!\n");
    printf("Enter your choice (s for snake, w for water, g for gun): ");
    scanf(" %c", &in); // note the space before %c to consume any leftover newline

    // Show choices
    printf("Computer chose: %c\n", comp);
    printf("You chose: %c\n", in);

    // Game logic
    if (comp == in) {
        printf("Result: Draw!\n");
    }
    else if ((comp == 's' && in == 'w') ||
             (comp == 'w' && in == 'g') ||
             (comp == 'g' && in == 's')) {
        printf("Result: You win!\n");
    }
    else if ((comp == 'w' && in == 's') ||
             (comp == 'g' && in == 'w') ||
             (comp == 's' && in == 'g')) {
        printf("Result: You lose!\n");
    }
    else {
        printf("Invalid input! Please enter 's', 'w', or 'g'.\n");
    }

    return 0;
}






/*
#include <stdio.h>
#include <stdlib.h>  // for rand, srand
#include <time.h>    // for time
int main(){
    char comp_in[] = {'s', 'w', 'g'}; // s = snake, w = water, g = gun
    char in;
    int randomIndex;
    // Seed random number generator
    srand(time(NULL));
    // Generate random index between 0 and 2
    randomIndex = rand() % 3;
    char comp = comp_in[randomIndex];
    // Input from user
    printf("Welcome to the Snake-Water-Gun game!\n");
    printf("Enter your choice (s for snake, w for water, g for gun): ");
    scanf(" %c", &in); // note the space before %c to consume any leftover newline
    
    // Show choices
    printf("Computer chose: %c\n", comp);
    printf("You chose: %c\n", in);

    if (comp == in)
    {
        // printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Same choices: Draw\n");
    }
    else if (comp_in[randomIndex] == 0 && in == 'w')
    {
        printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Congratulation you win!\n");
    }
    else if (comp_in[randomIndex] == 0 && in == 'g')
    {
        printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Sorry you loose!\n");
    }
    else if (comp_in[randomIndex] == 1 && in == 's')
    {
        printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Sorry you loose!\n");
    }
    else if (comp_in[randomIndex] == 1 && in == 'g')
    {
        printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Congratulation you win!\n");
    }
    else if (comp_in[randomIndex] == 2 && in == 's')
    {
        printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Congratulation you win!\n");
    }
    else if (comp_in[randomIndex] == 2 && in == 'w')
    {
        printf("Opposer choice was %c and your choice was %c\n", comp_in[randomIndex], in);
        printf("Sorry you loose!\n");
    }
    else
    {
        printf("Enter valid input!\n");
    }
    
    
    //printf("Random choice: %c\n", comp_in[randomIndex]);



    return 0;
}
*/