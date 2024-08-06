#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int player, computer = rand() % 3;
    int count = 0;

    printf("\t\t\t\t\t\t\tGAME STARTS NOW!!\n\n\t\t\t\t\t\t\t0)SNAKE for 0 \n\t\t\t\t\t\t\t1)WATER for 1 \n\t\t\t\t\t\t\t2)GUN__ for 2\n\n");

    printf("choose any one above: \n");
    scanf("%d",&player);

    printf("\t\t\t\t\t\t\tYOU chose %d\n\n",player);
    printf("\t\t\t\t\t\t\tCOMPUTER chose %d\n\n",computer);

    if(player == 0 && computer== 0)
    {
        printf("\t\t\t\t\t\t\tDRAW\n");
    }

    else if(player == 1 && computer== 1)
    {
        printf("\t\t\t\t\t\t\tDRAW\n");
    }

    else if(player == 2 && computer== 2)
    {
         printf("\t\t\t\t\t\t\tDRAW\n");
    }

    else if(player == 0 && computer== 1)
    {
        printf("\t\t\t\t\t\t\tYOU WON\n");
    }

    else if(player == 0 && computer== 2)
    {
         printf("\t\t\t\t\t\t\tGAME OVER\n");
    }

    else if(player == 1 && computer== 0)
    {
        printf("\t\t\t\t\t\t\tGAME OVER\n");
    }

    else if(player == 1 && computer== 2)
    {
        printf("\t\t\t\t\t\t\tYOU WON\n");
    }

    else if(player == 2 && computer== 0)
    {
        printf("\t\t\t\t\t\t\tYOU WON\n");
    }

    else if(player == 2 && computer== 1)
    {
        printf("\t\t\t\t\t\t\tGAME OVER\n");
    }

    else
    {
         printf("\t\t\t\t\t********* ENTER NUMBER (0) (1) (2) ONLY *********\n");
         return 1;
    }
}
