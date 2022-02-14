#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t ,f_num , d_num;
    printf("Enter number of test cases:\n");
    scanf(" %d",&t);

   while(t--)
  {

    printf("Enter number of her friends then the number of friends to be deleted:\n");

      scanf(" %d",&f_num);
      scanf(" %d",&d_num);

    int pop[f_num] , res[(f_num-d_num)] , j=0;

    printf("Enter popularity of her friends:\n");
    for(int i=0;i<f_num;i++)
    {
        scanf(" %d",&pop[i]);
    }
int last_ele_check=0;
    // 19  12  3  4  17
    // 23  45  11  77  18
    for(int i=1;i<f_num-1;i++)
    {
        if(pop[i]<pop[i+1])
        {
            if(j<(f_num-d_num))
            {
              res[j] = pop[i+1];
            }
        }

        else
        {
          res[j] = pop[i];
        }

        if(i=f_num-2)
        {
            last_ele_check++;
        }
    }
    if(last_ele_check!=0)
    {
        res[f_num-d_num-1]=pop[f_num-1];
    }
    for(int i=0;i<(f_num-d_num);i++)
    {
        printf("%d ",res[i]);
    }
    printf("\n");
  }

    return 0;
}
