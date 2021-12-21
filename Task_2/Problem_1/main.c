#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char  word[50];
    printf("Please,Enter the word: \n");
    gets(word);
    int length = strlen(word);
    int check_val=0;
    for(int i=0 ;i<length ; i++ )
    {
        if(word[i] == word[( (length-1)-i) ] )
            check_val++;
    }
    if(check_val == length)
    {
        printf("yes");

    }
else
{
    printf("no");
}
    return 0;
}
