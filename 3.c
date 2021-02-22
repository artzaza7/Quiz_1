#include<stdio.h>
int main()
{
    int win=0;
    int man;
    scanf("%d",&man);
    int score[man][3];
    int give[man];
    for (int i=0;i<man;i++)
    {
        give[i]=0;
        for(int j=0;j<3;j++)
        {
            scanf("%d",&score[i][j]);
            give[i]=give[i]+score[i][j];
        }
    }
    for(int i=0;i<man;i++)
    {
        if(win<give[i])
        {
            win=i;
        }
    }
    printf("%d",win);
    return 0;
}