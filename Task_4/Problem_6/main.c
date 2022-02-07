#include <stdio.h>
#include <stdlib.h>
int chocolateFeast(int n, int c, int m)
{
    int wrappers;
    int chocholate = n/c;
    wrappers = chocholate;
     while (chocholate >= m )
        {
             wrappers++;
             chocholate -= (m-1);
        }

    return wrappers;
}

int main()
{
   int t , n , c , m;
   printf("Enter Number Of Test Cases: ");
   scanf(" %d",&t);

   for(int i=0 ; i<t ;i++)
   {
     printf("Enter your money: ");
     scanf(" %d",&n);

     printf("Enter cost of one chocholate : ");
     scanf(" %d",&c);

     printf("Enter how many wrappers can get free chocolate: ");
     scanf(" %d",&m);

     int result = chocolateFeast(n, c, m);

     printf("%d",result);
   }


    return 0;
}
