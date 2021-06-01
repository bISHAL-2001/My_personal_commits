#include <stdio.h>

int main()
{
    long a,b;
    scanf("%ld %ld",&a,&b);
    long nums[a];

    for(int i=1;i<=a;i++)
    {
        nums[i-1]=i;
    }

    long and=0,or=0,xor=0;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<i;j++)
        {
            long temp=nums[i]&nums[j];
            long temp1=nums[i]|nums[j];
            long temp2=nums[i]^nums[j];
            if(temp<b)
            {
                if(and<temp)
                    and=temp;
            }
            if(temp1<b)
            {
                if(or<temp1)
                    or=temp1;
            }
            if(temp2<b)
            {
                if(xor<temp2)
                    xor=temp2;
            }

        }
    }

    printf("%ld\n%ld\n%ld",and,or,xor);
    return 0;
}
