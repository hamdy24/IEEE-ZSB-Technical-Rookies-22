#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALPHA_BIT_NUM                26

#define NUM_OF_RANDOMIZING_OPTIONS    4
#define OPTION_1                      1
#define OPTION_2                      2
#define OPTION_3                      3

int main()
{
    char small[] = "qazwsxedcrfvtgbyhnujmikolp";
    char capital[] = "QAZWSXEDCRFVTGBYHNUJMIKOPL";
    char symbol[] = "@#$%&";
    char number[] = "0123456789";
    int pass_len = 10;
    char pass[pass_len];

    srand(time(0));
    int rand_val = rand()%NUM_OF_RANDOMIZING_OPTIONS;  //this variable makes the sequence of random generating not fixed

    for (int i = 0; i < pass_len ; i++)
        {

        switch(rand_val)
        {
            case OPTION_1:
            {
                pass[i] = number[rand() % 10];  //to ensure having a number
                rand_val = rand() % NUM_OF_RANDOMIZING_OPTIONS;
                printf("%c", pass[i]);
                break;
            }

            case OPTION_2:
            {
                pass[i] = symbol[rand() % 5];  //to ensure having a sumbol
                rand_val = rand() % NUM_OF_RANDOMIZING_OPTIONS;
                printf("%c", pass[i]);
                break;
            }

            case OPTION_3:
            {
                pass[i] = capital[rand() % ALPHA_BIT_NUM];  //to ensure having a capital letters
                rand_val = rand() % NUM_OF_RANDOMIZING_OPTIONS;
                printf("%c", pass[i]);
                break;
            }

            default:
            {
                pass[i] = small[rand() % ALPHA_BIT_NUM];  //to ensure having a small letters
                rand_val = rand() % NUM_OF_RANDOMIZING_OPTIONS;
                printf("%c", pass[i]);
                break;
            }
        }

    }

    return 0;
}
