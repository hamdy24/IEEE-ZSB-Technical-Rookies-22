#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[15];
    float grade;

}std_info;

int main()
{
    int num;
    printf("Enter number of class students:\n");
    scanf(" %d",&num);

    std_info students_list[num];


    for(int i = 0 ; i < num ; i++)
    {
        printf("Student %d name is:\n",i+1);
        scanf(" %s",students_list[i].name);

        printf("Student %d grade is:\n",i+1);
        scanf(" %f", &students_list[i].grade);
    }


  float lowest = students_list[0].grade , second_lowest;

    for(int i=0 ; i<num ; i++)
    {
        if(students_list[i].grade < lowest )
        {
            second_lowest = lowest;
            lowest = students_list[i].grade;
        }
        else if(students_list[i].grade < second_lowest && students_list[i].grade != lowest)
        {
          second_lowest = students_list[i].grade;
        }
    }

    for(int i=0 ; i<num ; i++)
    {
        if(students_list[i].grade == second_lowest)
        {
            printf("\n%s",students_list[i].name);
        }
    }


    return 0;
}
