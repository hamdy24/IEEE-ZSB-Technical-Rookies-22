#include <stdio.h>
#include <stdlib.h>

/*********** Printing All Prime Numbers under a specific number ******************/

int main()
{
    int num;
    int check_value;

    printf("Enter A number: \n");
    scanf(" %d",&num);

    if( num > 1)
    {
        for(int j = 2 ; j <= num ; j++)
        {
            for( int i = 2 ; (i <= (j/2)) ; i++)
            {
                if( (j % i) == 0 )
                {
                    check_value++;
                }
            }
                    if(check_value == 0)
                        {
                            printf("%d   ", j);
                        }
                    check_value =0;

        }



    }


    return 0;
}
