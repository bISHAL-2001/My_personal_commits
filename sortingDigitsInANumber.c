#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int c=0;
    int temp=n;
    while(temp!=0)
    {
        c++;
        temp/=10;
    }
    int arr[c];
    temp=c,c=0;
    while(n!=0)
    {
        int d = n%10;
        arr[c++]=d;
        n/=10;
    }
    int i, j;
    for (i = 0; i < temp-1; i++)
    {
        // Last i elements are already in place
        for (j = 0; j < temp-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("The digits in sorted ascending order is:\n");
    for(i=0;i<temp;i++)
    {
        printf("%d ",arr[i]);
    }
}