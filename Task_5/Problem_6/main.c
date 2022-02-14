#include <stdio.h>
#include <stdlib.h>

int main(){
    int  players_num , games_num , board_scores[200001]
        ,player_scores[200001],player_ranks[200001] ,i,j;

    printf("Enter number of players:\n");
    scanf(" %d",&players_num);

    printf("Enter the leader board scores in decreasing order:\n");
    for(i=0;i<players_num;i++)
      scanf(" %d",board_scores[i]);

    player_ranks[0]=1; //setting first rank as 1

    for(i=1;i<players_num;i++)
    {
        if(board_scores[i]==board_scores[i-1])
            player_ranks[i]=player_ranks[i-1];
        else
            player_ranks[i]=player_ranks[i-1]+1;
    }

    player_ranks[players_num]=player_ranks[players_num-1]+1;

    printf("Enter the number games the player plays:\n");
    scanf(" %d",&games_num);

    printf("Enter the games scores:\n");
    for(i=0;i<games_num;i++)
        scanf(" %d",player_scores[i]);

    i=players_num-1;
    j=0;
    while(j<games_num)//loop for all games
        {
        while(board_scores[i]<player_scores[j] && i>0)
            i--;
        if(board_scores[i]==player_scores[j])
        printf("%d\n",player_ranks[i]);
        else if(board_scores[i]>player_scores[j])
            printf("%d\n",player_ranks[i]+1);
        else
        {
            if(player_ranks[i]==1)
              printf("1\n");
            else
                printf("%d\n",player_ranks[i]-1);
        }
        j++;
    }
    return 0;
}
