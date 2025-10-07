#include<stdio.h>
int main (){
  int player1_choice,player2_choice;
    printf("Welcome to Rock-Paper-Scissors(2 Players) Game.\n");
    printf("1-Rock\n");
    printf("2-Paper\n");
    printf("3-Scissors\n");
    printf("Player 1 , enter your choice: ");
    scanf("%d",&player1_choice);
    printf("Player 2 , enter your choice: ");
    scanf("%d", &player2_choice);
 
    if (player1_choice==1){
        printf("\nplayer 1 choose: Rock");
    }
    else if (player1_choice == 2)
    {
        printf("\nplayer 1 choose: Paper\n");
    }
    else if (player1_choice == 3)
    {
        printf("\nplayer 1 choose: Scissors ");
    }
    else
    {
        printf(" invalid! \n");
    }
    if (player2_choice == 1)
    {
        printf("\nplayer 2 choose: Rock\n");
    }
    else if (player2_choice == 2)
    {
        printf("player 2 choose: Paper\n");
    }
    else if (player2_choice == 3)
    {
        printf("player 2 choose: Scissors \n\n");
    }
    else
    {
        printf(" invalid! \n");
    }

        if (player1_choice == player2_choice)
        {
            printf("the game is  tie.");
        }
        else if (player1_choice == 1 && player2_choice == 2)
        {
            printf("player2 wins the game.");
        }
        else if (player1_choice == 2 && player2_choice == 1)
        {
            printf("player1 wins the game.");
        }
        else if (player1_choice == 2 && player2_choice == 3)
        {
            printf("player2 wins the game.");
        }
        else if (player1_choice == 3 && player2_choice == 2)
        {
            printf("player1 wins the game.");
        }
        else if (player1_choice == 1 && player2_choice == 3)
        {
            printf("player1 wins the game.");
        }
        else if (player1_choice == 3 && player2_choice == 1)
        {
            printf("player2 wins the game.");
        }
        else
        {
            printf("You enter invalid choice.");
        }

    return 0;
}