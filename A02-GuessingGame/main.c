/*
"""
Program: Guessing Game Modified 3
By: John winsor
Date: 2023-01-13
Filename: GuessingGameMOD3.py
"""
import random
NumberToGuess = random.randint(0, 9)
gameContinue = True
LCV = 'Y'
while LCV == 'Y':
    while gameContinue == True:
        user = int(input("guess a number between 0,9: "))
        if user == NumberToGuess:
            print('Correct Guess')
            gameContinue = False
        elif user > NumberToGuess:
            print('Too high')
        elif user < NumberToGuess:
            print('Too low')
    LCV = input("Enter Y to continue or Q to quit:").upper()
    if LCV == 'Y':
        gameContinue = TRUE
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void guess(int N){
    int number, guess, numberofguess = 0;
    srand(time(NULL));
    number = rand()%N;
    do {

        printf("\nGuess Number between 1 and %d\n", N);
        scanf("%d", &guess);
        if (guess == number) {
            printf("Good Job!!\n");
        } else if (number > guess){
            printf("Too low try again\n");
        }
         else if (number < guess) {
            printf("Too high try again!\n");
        }
        numberofguess += 1;
            printf("%d Guesses used\n", numberofguess);
    } while(guess != number);
    printf("\nGame done\n");
}

int main()
{
    int N = 100;
    guess(N);
    return 0;
}

