#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char seq[10];
    int ch_num , seq_len ,count = 0;

    printf("Enter the sequence of letters to be repeated\n");
    scanf(" %s", &seq);
    seq_len = strlen(seq);

    printf("\nEnter the number of characters to be searched\n");
    scanf(" %d", &ch_num);

    char repeated_seq[ch_num];
    int n=0;
    for(int i=0 ; i<ch_num ; i++)
    {
        if(n>=seq_len){
            n=0;}

        repeated_seq[i] = seq[n];
        n++;
    }

    for(int i=0 ; i<ch_num ; i++)
    {
        if(repeated_seq[i] == 'r' )
        {
            count++;
        }
    }
    printf("\nLetter 'r' was repeated %d times", count);
    return 0;
}
