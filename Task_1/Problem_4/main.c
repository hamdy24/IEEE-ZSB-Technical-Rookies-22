#include <stdio.h>
#include <stdlib.h>

#define FRAME_STYLE_CORRECTION	4 // 2 for "*" and a space " " in the front and the same at the end

int main()
{

    char  str[200];
    int i = 0 ,letters = 0, longest = 0 , word_counter = 0;
	
	printf("Enter the scentence : \n");
    scanf(" %[^\n]s",str);

    // for calculating number of letters for the longest word
    for (i = 0; str[i] != '\0'; i++)
        {
        if (str[i] != ' ') {
            letters++;
            if (letters > longest)
            {
                longest = letters;
            }
        }
            else
            {
                letters = 0;
            }
        }

        //for the first line
        for(i=0 ; i<(longest + FRAME_STYLE_CORRECTION ) ; i++)
        {
            printf("*");
        }

        i=0;
        printf("\n* ");

    //for printing the words
    while(str[i]!='\0')
    {
            printf("%c", str[i]);

            word_counter++;
            if(str[i] == ' ')
            {
                for(int j = 0 ; j <=(longest - word_counter) ; j++)
                {
                    printf(" ");

                }
                printf("*\n* ");
                word_counter = 0;
               // i++;
            }
            i++;
    }

    //finishing last word as '\0' don't allow to enter the if statement
    for(int j=0 ; j<=(longest - word_counter) ; j++)
        printf(" ");

    //moving to the last line
    printf("*\n");

    // for the last line
   for(i=0 ; i<(longest + FRAME_STYLE_CORRECTION ) ; i++)
        {
            printf("*");
        }


    return 0;
}

