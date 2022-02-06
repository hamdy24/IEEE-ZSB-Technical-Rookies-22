#include <stdio.h>
#include <stdlib.h>

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    int fine;
    if(y1<y2 || (y1==y2 && m1<m2) || (y1==y2 && m1==m2 && d1<d2))
    {
        fine = 0;
    }
    else if(y1==y2 && m1==m2 && d1>d2)
    {
        fine = (15*(d1-d2));
    }
    else if(y1==y2 && m1>m2)
    {
        fine = (500*(m1-m2));
    }
    else if(y1>y2)
    {
        fine = 10000;
    }

    return fine;
}

int main()
{
    int return_day ,return_mon,return_year;
    int due_day ,due_mon,due_year;

    printf("Enter Return Date: day month year\n");
    scanf(" %d %d %d",&return_day ,&return_mon ,&return_year);

    printf("Enter Due Date: day month year\n");
    scanf(" %d %d %d",&due_day ,&due_mon ,&due_year);

    int fine = libraryFine(return_day , return_mon ,return_year , due_day  ,due_mon  ,due_year);
    printf("\n%d", fine);

    return 0;
}
