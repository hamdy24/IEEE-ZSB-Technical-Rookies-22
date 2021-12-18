#include <stdio.h>

int main(void)
 {
    printf ("PLease, Enter the number: ");

    int num , sum = 0;
    scanf("%d", &num);

    if(num>1)
    {
        while(num >= 1)
        {
            sum = sum + num;
            num--;
        }
        printf("The Sum Equals : %d" , sum);
    }

    else
    {
        printf("The number is invalid");
    }
    return 0 ;
}
