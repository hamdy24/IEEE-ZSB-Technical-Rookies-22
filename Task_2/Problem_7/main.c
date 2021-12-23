#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int sub_len , count = 0;
    char str[200] , sub_str[200];

    printf("Enter the string\n");
    gets(str);

    printf("\nEnter the string to which we search\n");
    gets(sub_str);

    sub_len = strlen(sub_str);

    char * pc_StartOfSearch = str;

    if (sub_len)
    while ((pc_StartOfSearch = strstr(pc_StartOfSearch, sub_str)))
        {
        pc_StartOfSearch += sub_len;
        count++;
    }
    printf("%d",count);

    return 0;
}
