#include <stdio.h>
#include <stdlib.h>

// led on   held no
char * hackerrankInString(char *string)
{
    int total, i=0, match_counts=0;
    char *substring = "hackerrank";

    while (string[i] != '\0')
    {
        if (string[i] == substring[match_counts])
            match_counts++;
        i += 1;
    }
    if (strlen(substring) == match_counts)
        return ("YES");
    else
        return ("NO");
}
int main()
{
    int q;
    printf("Enter the number of queries:\n");
    scanf(" %d",&q);

    printf("Enter the query strings:\n");
    for(int i = 0; i < q; i++)
    {
        char* s = (char *)malloc(51200 * sizeof(char));
        scanf(" %s",s);
        printf("%s\n", hackerrankInString(s));
    }
    return 0;
}
