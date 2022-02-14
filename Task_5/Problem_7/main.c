#include <stdio.h>
int main()
{
    int attendee_num, topics_num;
    printf("Enter number of attendees:\n");
    scanf(" %d",&attendee_num);

    printf("Enter number of topics:\n");
    scanf(" %d",&topics_num);

    char bin_strings[attendee_num][topics_num];

    printf("Enter the binary strings of the topics:\n");
    for(int i=0; i<attendee_num; i++)
        scanf(" %s", bin_strings[i]);

    int max_topics = 0, teams_count = 0 , res[attendee_num][attendee_num];

    for(int i=0; i<attendee_num; i++)
    {
        for(int j=i+1; j<attendee_num; j++)
        {
            int matches = 0;
            for(int k=0; k<topics_num; k++)
            {
                if(bin_strings[i][k] != bin_strings[j][k] || bin_strings[i][k]=='1')
                    matches++;
            }
            res[i][j] = matches;
            if(max_topics < matches)
                max_topics = matches;
        }
    }
    for(int i=0; i<attendee_num; i++)
    {
        for(int j=i+1; j<attendee_num; j++)
        {
            if(res[i][j] == max_topics)
             teams_count++;

        }
    }
    printf("Maximum number of known topics: %d\n",max_topics);
    printf("Number of teams that know all known topics: %d\n",max_topics);
}


