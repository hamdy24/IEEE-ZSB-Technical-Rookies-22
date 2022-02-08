#include <stdio.h>
#include <stdlib.h>

int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
    int max_money=0;
    for(int i=0 ; i<keyboards_count ;i++)
    {
        for(int j=0 ;j<drives_count ;j++)
        {
            if( max_money < (*(keyboards+i)) + (*(drives+j)) )
            {
                if( b >= (*(keyboards+i)) + (*(drives+j)))
                {
                   max_money = (*(keyboards+i)) + (*(drives+j));
                }
            }
        }
    }
    if(max_money == 0)
    {
        max_money = -1;
    }

    return max_money;
}
int main()
{
    int b,n,m;
    printf("Enter budget,keyboards and drives number:");
    scanf("%d %d %d",&b,&n,&m);
    int *keyboards = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&keyboards[i]);
    }
    int keyboards_count = n;

    int *drives = malloc(sizeof(int) * m);
    for(int i = 0; i < m; i++)
    {
       scanf("%d",&drives[i]);
    }
    int drives_count = m;
    int moneySpent = getMoneySpent(keyboards_count, keyboards, drives_count, drives, b);
    printf("Max money spent: %d",moneySpent);


    return 0;
}
