#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{
        srand(time(0)); //Randomization

    int plr; 
    // stone----> 0
    // paper----> 1
    // scissor--->2
    // Stone > scissor,scissor > paper , paper > stone
   
    int count = 5, score1 = 0, score2 = 0;
    for (int i = 0; i < count; i++)
    {
        int comp = rand() % 3; //Everytime chooses a number between 0 -3
         printf("Enter your choice---->\n 0. Stone\n 1. Paper \n2. Scissors\n");
    scanf("%d", &plr);
        if (plr == 0 && comp == 0)
        {
            printf("Same choice!!\n");
        }
        else if (plr == 1 && comp == 1)
        {
            printf("Same choice!!\n");
        }
        else if (plr == 2 && comp == 2)
        {
            printf("Same choice!!\n");
        }
        else if (plr == 0 && comp == 1)
        {
            printf("Computer chose %d , You lost!!!", comp);
            score2++;
        }
        else if (plr == 0 && comp == 2)
        {
            printf("Computer chose %d , You won !!!", comp);
            score1++;
        }
        else if (plr == 1 && comp == 0)
        {
            printf("Computer chose %d ,You won !!!", comp);
            score1++;
        }
        else if (plr == 1 && comp == 2)
        {
            printf("Computer chose %d ,You lost !!! ", comp);
            score2++;
        }
        else if (plr == 2 && comp == 0)
        {
            printf("Computer chose %d , You lost !!!", comp);
            score2++;
        }
        else if (plr == 2 && comp == 1)
        {
            printf("Computer chose %d , You Won!!!", comp);
            score1++;
        }
        else
        {
            printf("Enter a valid number !!\n");
        }
        printf("\nYour Score ----> %d\n Computer score ----> %d\n", score1, score2);
       
    }
     if (score1 > score2) //Prints Final Result
        {
            printf("You won !!! Congrats!!");
        }
        else if (score1 == score2)
        {
            printf("Match is draw!!!");
        }
        else
        {
            printf("Computer won!!!,Better Luck Next Time!");
        }
}

int main()
{

    game();

    return 0;
}
