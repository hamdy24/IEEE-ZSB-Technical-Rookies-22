#include <stdio.h>

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
            for( int i = 2 ; i*i <= j ; i++)
            {
                if( (j % i) == 0 )
                {
                    check_value++;
                }
            }
                    // becouse "2" affects "check_value" while being a real prime number
                    if(check_value == 0 || j == 2) 
                        {
                            printf("%d   ", j);
                        }
                    check_value =0;

        }



    }
	
	else
		printf("Invalid");

    return 0;
}
