#include<stdio.h>
int main()
{
    int number;
    int check=0;
    scanf("%d",&number);
    while(check==0)
    {
        for(int i=2;i<number;i++)
        {
            if(number%i==0)
                check=2;
            else
                check=1;
        }   
    }
    if(check==2)
    {
        printf("Yes");
    }
    else
    {
        printf("%d",number);
    }
    return 0;
}