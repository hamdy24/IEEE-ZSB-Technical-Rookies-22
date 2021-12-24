#include <stdio.h>
#include <stdlib.h>

char* kangaroo(int x1, int v1, int x2, int v2)
{
    char* str;
    int position_1 = x1 , position_2 = x2;

    if(position_1 == position_2)
    {
        str = "Yes";
        return str;
    }
    for(int i=0 ; position_1 <= position_2 ; i++)
    {
        position_1 += v1;
        position_2 += v2;

        if(position_1 == position_2)
        {
            str = "YES";
            return str;
        }
    }

       str = "NO";

    return str;
}

int main()
{
    int x1 , v1 , x2 , v2 ;

    printf("Enter position of the first one:\n");
    scanf(" %d",&x1);
    printf("Enter speed of the first one:\n");
    scanf(" %d",&v1);
    printf("Enter position of the second one:\n");
    scanf(" %d",&x2);
    printf("Enter speed of the second one:\n");
    scanf(" %d",&v2);

    char* result;
    result = kangaroo( x1, v1, x2, v2);

    printf("\n%s",result);

    return 0;
}
