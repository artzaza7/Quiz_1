#include<stdio.h>
int main()
{
    long int number;
    int check=0;
    int boom=0;
    scanf("%ld",&number);
    long int min=number-1,max=number+1;
    while(check==0&&number!=1&&number!=0&&number!=2)
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
    if(number==1||number==0||number==2)
    {
        printf("%ld",number);
    }
    else if(check==2)
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
        boom=0;
        for(int i=number;i<=number+10&&boom!=1;i++)
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
        printf("%ld %ld",min,max);
    }
    else
    {
        printf("%ld",number);
    }
    return 0;
}