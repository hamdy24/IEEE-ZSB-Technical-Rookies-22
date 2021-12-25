#include <stdio.h>
#include <stdlib.h>

int pageCount(int n, int p);

int main()
{
    printf("Enter number of pages of the book: \n");
    int num;
    scanf(" %d",&num);
    printf("\nEnter number of page you want to jump for: \n");
    int page;
    scanf(" %d",&page);

    int result = pageCount( num , page );

    printf("\nYou need %d flip to reach this page",result);



    return 0;
}


int pageCount(int n, int p)
{

    if(p == 1 || p == n)
    {
        return 0;
    }

    int turns_count;

    if( p >  (n/2) )
    {
        if( p % 2 == 0)
        {
            turns_count =  (n - p) / 2;
        }
        else
        {
           turns_count = (n - (p-1) ) / 2  ;
        }
    }


    if( p <= (n/2) )
    {

     if( p % 2 == 0)
     {
         turns_count = p / 2;
     }
     else
     {
         turns_count = (p-1) / 2;
     }
    }
    return turns_count;

}
