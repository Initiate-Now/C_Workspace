/**************************************************
 * Name    : guess_the_number.c
 * Purpose : 
 * Author  : Navin Chakravarthy Kamalakannan
 **************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h> // for random generator seed

int main(){
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;

    time_t t;

    // Initialization of random number generator

    srand((unsigned) time(&t));

    //get the random number
    randomNumber = rand()%21;
    printf("\n This is a guessing game");
    printf("\n I have chosen a number between 0 and 20, Which you must guess. \n");

    for(numberOfGuesses=5;numberOfGuesses>0;--numberOfGuesses){
        printf("\n You have %d tr%s left", numberOfGuesses, numberOfGuesses==1?"Y":"ies");
        printf("\n Enter a guess :");
        scanf("%d", &guess);

        if(guess == randomNumber){
            printf("\n Congratulations, You guessed it! \n");
            return;
        }
        else if(guess<0||guess>20){
            printf("I said the number is between 0 and 20 \n");
        }
        else if(randomNumber > guess){
            printf("Sorry, %d is wrong, My number is greater then that.\n",guess);
        }
        else if(randomNumber < guess){
            printf("Sorry, %d is wrong, My number is less then that.\n",guess);
        }
    } 
    printf("you have had five tries and failed. The number was %d \n",randomNumber);
    return 0;
}