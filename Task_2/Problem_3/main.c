#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Random_generate(int mini , int max);

int main()
{
    int rand_num  , user_guess;

    rand_num = Random_generate(100 , 999);

    int n1 , n2 ,n3 , a1 , a2 ,a3 , hit_count =0 , miss_count =0 , attempt_count = 1;

    int temp1 = rand_num , temp2;
    //slice the random number into n1 n2 n3
    n3 = temp1%10;
    temp1 /= 10;
    n2 = temp1%10;
    temp1 /= 10;
    n1 = temp1%10;


while(hit_count < 3)
{
   printf("\nEnter Your Guess: \n");
    scanf(" %d",&user_guess);

    temp2 = user_guess;

    //slice user num into a1 a2 a3
    a3 = temp2%10;
    temp2 /= 10;
    a2 = temp2%10;
    temp2 /= 10;
    a1 = temp2%10;

    hit_count = 0;
    miss_count = 0;

    if(a1 == n1)
    {
        hit_count++;
    }

    if(a2 == n2)
    {
        hit_count++;
    }

    if(a3 == n3)
    {
        hit_count++;
    }

    if(a1 != n1 && (a1 == n2 || a1 == n3) )
    {
        miss_count++;
    }
    if(a2 != n2 && (a2 == n1 || a2 == n3) )
    {
        miss_count++;
    }
    if(a3 != n3 && (a3 == n2 || a3 == n1) )
    {
        miss_count++;
    }

    printf("\nYou got %d hits and %d misses  ",hit_count , miss_count);

    attempt_count++;

}

    printf("\nWell Done! You made it after %d trial",attempt_count);

    return 0;
}


int Random_generate(int mini , int max)
{
    int res;
    srand(time(0));
    do
    {
        res = rand();
    }while(res<mini || max<res);

    return res;
}
