#include <stdio.h>
#include <string.h>

struct Player 
{
    int score;
    char name[12];
};


int main(){


    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Batuhan");
    player1.score = 4;

    strcpy(player2.name, "Batu");
    player2.score = 5;
    
    printf("%s\t",player1.name);
    printf("%d\n",player1.score);

    printf("%s\t",player2.name);
    printf("%d\n",player2.score);


    return 0;
}