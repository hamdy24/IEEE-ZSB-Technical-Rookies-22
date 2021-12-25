#include <stdio.h>
#include <stdlib.h>

int countingValleys(int steps, char* path)
{
    int counter = 0 , vally_count = 0;

    for(int i = 0 ; i < steps ; i++)
    {
        if(path[i] == 'U')
        {
            counter++;
            if(counter == 0 && path[i] == 'U') //    "\/"
            {
                vally_count++;
            }
        }
        else if(path[i] == 'D')
        {
            counter--;
        }

    }

    return vally_count;
}

int main()
{
    int steps;
    printf("Enter number of steps:\n");
    scanf("%i", &steps);

    char* path[steps];
    printf("Enter The Path: \n");
    scanf("%s", path);

    int result = countingValleys(steps, path);
    printf("\nNumber of valleys across the path = %d\n", result);

    return 0;
}
