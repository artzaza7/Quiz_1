#include<stdio.h>
int main()
{
    int number;
    int check=0;
    int boom=0;
    scanf("%d",&number);
    int min=number-1,max=number+1;
    while(check==0)
    {
        for(int i=2;i<number;i++)
        {
            if(number%i==0)
            {
                check=2;
                break;
            }
            else
                check=1;
        }   
    }
    if(check==2)
    {
        for(int i=number-1;i>10&&boom!=1;i--)
        {
            for(int j=2;j<10;j++)
            {
                if(i%j==0)
                {
                    boom=2;
                    break;
                }
                else
                {
                    min=i;
                    boom=1;
                }
            }
        }
        for(int i=number;i<number+2&&boom!=1;i++)
        {
            for(int j=2;j<10;j++)
            {
                if(i%j==0)
                {
                    boom=2;
                    break;
                }
                else
                {
                    max=i;
                    boom=1;
                }
            }
        }
        printf("%d %d",min,max);
    }
    else
    {
        printf("%d",number);
    }
    return 0;
}