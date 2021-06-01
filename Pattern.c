#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=1000)
    {
        int range=2*n-1;
        for(int i =0; i<range;i++)
        {
            for (int j = 0; j <range ; j++)
            {
                int temp;
                if(i<j)
                    temp=i;
                else
                    temp=j;
                if(temp<range-i)
                    temp=temp;
                else
                    temp=range-i;
                if(temp<range-j-1)
                    temp=temp;
                else
                    temp=range-j-1;
                printf("%d ",n-temp);
            }
            printf("\n");
        }

    }
    return 0;
}

/*
 *
 * 5
 * 5 5 5 5 5 5 5 5 5
 * 5 4 4 4 4 4 4 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 1 2 3 4 5
 * 5 4 3 2 2 2 3 4 5
 * 5 4 3 3 3 3 3 4 5
 * 5 4 4 4 4 4 4 4 5
 *
 *
 * 2
 * 2 2 2
 * 2 1 2
 * 2 1 2
 *
 */