#include <stdio.h>
int fact(int a)
{
    if(a==0||a==1)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    int n;
    printf("%s","Enter a number:");
    scanf("%d", &n);
    printf("%s", "Calculations:\n");
    int temp = n,s=0,c=0;
    while(temp!=0)
    {
        c++;
        temp/=10;
    }
    int nums[c];
    c=c-1;
    int cc = c+1;
    temp = n;
    while(n!=0)
    {
        int d= n%10;
        nums[c--]=d;
        n/=10;
    }
    int i=0;
    for(;i<cc;i++)
    {
        if(i==cc-1)
            printf("%d! =",nums[i]);
        else
            printf("%d! +", nums[i]);
        s+= fact(nums[i]);
    }
    printf("%d",s);
    if(temp==s)
        printf("\nThus %d is special number.",temp);
    else
        printf("\nThus %d is not special number.",temp);
    return 0;
}