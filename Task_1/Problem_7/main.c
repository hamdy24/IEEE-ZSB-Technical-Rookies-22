#include <stdio.h>

int main() {
// p 7
printf ("PLease, Enter the number\n");
int num , sum = 0;
scanf("%d", &num);
if(num>=3)
{
    while(num >= 3)
    {
        if( (num % 3 == 0) || (num % 5 == 0) )
        {
        sum = sum + num;
        }

    num--;
    }

    printf("The Sum equals : %d" , sum);
}
else
    {
    printf("The number is invalid");
    }
return 0;
}
