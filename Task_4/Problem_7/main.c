#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void kaprekarNumbers(long p, long q)
{
    int flag = 0;
    for(long num=p ; num<=q ; num++)
    {
        int num_digits=0 ; long temp=num ;
        while(temp != 0)
        {
            temp/=10;
            num_digits++;
        }
        long long sqr = pow(num,2) , l, r;

        r = sqr % (int)pow(10,num_digits);
        l = sqr /pow(10,num_digits);

        if(num == (l+r))
        {
            printf("%d ",num);
            flag++;
        }
    }
    if(flag == 0)
        printf("INVALID RANGE");
}

int main()
{
    int p , q;
    printf("Enter the limits:\n");
    scanf(" %d %d",&p,&q);

    kaprekarNumbers(p, q);

    return 0;
}
