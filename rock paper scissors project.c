#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n,choice = 1;
    int won = 0, lose = 0, tie = 0;

    srand(time(NULL));

    while (choice == 1){
        printf("---------- MENU ----------\n");
    printf("1.Rock\n2.Paper\n3.Scissors\nEnter your choice: ");
    scanf("%d",&n);

    if (n == 1){
        printf("You chose Rock\n");
    } else if (n==2){
        printf("You chose Paper\n");
    } else if (n==3){
        printf("You chose Scissors\n");
    } else {
        printf("Invalid!\n");
    }

    int computer = rand() % 3 + 1;

    if (computer == 1){
        printf("Computer chose Rock\n");
    } else if( computer == 2){
        printf("Computer chose Paper\n");
    } else{
        printf("Computer chose Scissors\n");
    }

    if (n < 1 || n > 3){
        printf("Invalid Input! Try again\n");
    } else{
            if(n == computer){
            printf("The game is a TIE!\n");
            tie++;
        } else if(n == 1 && computer == 3){
            printf("You Win!\n");
            won++;
        } else if(n == 1 && computer == 2){
            printf("You Lose!\n");
            lose++;
        } else if(n == 2 && computer == 1){
            printf("You Win!\n");
            won++;
        } else if(n == 2 && computer == 3){
            printf("You Lose!\n");
            lose++;
        } else if(n == 3 && computer == 1){
            printf("You Lose!\n");
            lose++;
        } else if(n == 3 && computer == 2){
            printf("You Win!\n");
            won++;
        } else {
            printf("Error!");
        }
    }

        printf("Enter 1 to continue or 0 to stop: ");
        scanf("%d",&choice);
    }

    printf("You have won %d times.\nYou have lost %d times.\nYou are tied %d times.",won,lose,tie);
    
    return 0;
}