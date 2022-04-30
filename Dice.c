#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("\n---------- Lets Start The Game! ----------\n");
    printf("\nComputer, please Roll a Dice!  If the Rolled Number Will Be 1, I start.\n");

    sleep(3);
    srand(time(0));

    int GameStarter = (rand() % (2 - 1 + 1)) + 1;
    int RolledForComputer = (rand() % (6 - 1 + 1)) + 1;
    int RolledForUser = (rand() % (6 - 1 + 1)) + 1;

    if(GameStarter == 1){
        printf("\nComputer Rolled %d, I Start!\n", GameStarter);
        sleep(3);
        printf("\nPlease Give Me 6!!!\n");
        sleep(3);
        if(RolledForComputer == 6){
            RollDice(6);
            printf("\nHahahahah, I Got This!, I Rolled 6\n");}
        if(RolledForComputer == 1){
            RollDice(1);
            printf("\nHuh, I Got 1?! You Were Lucky This Time!\n");}
        if(RolledForComputer >= 2 && RolledForComputer <= 5)
            RollDice(RolledForComputer);
            printf("\nI Got %d\n", RolledForComputer);

        printf("\nNow It Is Your Time\n");

        sleep(3);
        printf("\nYou Rolled %d\n", RolledForUser);
        RollDice(RolledForUser);

        GameCondition(RolledForComputer, RolledForUser);
        
    }
        

    if(GameStarter == 2){
        printf("\nComputer Rolled %d, You Start! Good Luck.\n", GameStarter);
        sleep(3);
        printf("\nYou Rolled %d\n", RolledForUser);
        RollDice(RolledForUser);
        printf("\nNow It Is Computer Time\n", RolledForUser);

        sleep(3);
        printf("\nPlease Give Me 6!!!\n");
        sleep(1);

        if(RolledForComputer == 6){
            RollDice(6);
            printf("\nHahahahah, I Got This!, I Rolled 6\n");
        }

        if(RolledForComputer == 1){
            RollDice(1);
            printf("\nHuh, I Got 1?! You Were Lucky This Time!\n");
        }

        if(RolledForComputer > 1 && RolledForComputer < 6){
            RollDice(RolledForComputer);
            printf("\nI Got %d\n", RolledForComputer);
        }
        
        GameCondition(RolledForComputer, RolledForUser);
        
    }
        
}

int GameCondition(RolledForComputer, RolledForUser){
    if(RolledForComputer > RolledForUser)
            printf("\nI Won!\n");
        if(RolledForComputer < RolledForUser)
            printf("\nYou Won!\n");
        if(RolledForComputer == RolledForUser)
            printf("\nTie\n");
}

int RollDice(Number){
    if(Number==1)
        printf("\n* * * * * * *\n* * * * * * *\n* * * * * * *\n* * * X * * *\n* * * * * * *\n* * * * * * *\n* * * * * * *\n");
    if(Number==2)
        printf("\n* * * * * * *\n* * * * * X *\n* * * * * * *\n* * * * * * *\n* * * * * * *\n* X * * * * *\n* * * * * * *\n");
    if(Number==3)
        printf("\n* * * * * * *\n* X * * * * *\n* * * * * * *\n* * * X * * *\n* * * * * * *\n* * * * * X *\n* * * * * * *\n");
    if(Number==4)
        printf("\n* * * * * * *\n* X * * * X *\n* * * * * * *\n* * * * * * *\n* * * * * * *\n* X * * * X *\n* * * * * * *\n");
    if(Number==5)
        printf("\n* * * * * * *\n* X * * * X *\n* * * * * * *\n* * * X * * *\n* * * * * * *\n* X * * * X *\n* * * * * * *\n");
    if(Number==6)
        printf("\n* * * * * * *\n* X * * * X *\n* * * * * * *\n* X * * * X *\n* * * * * * *\n* X * * * X *\n* * * * * * *\n");
}