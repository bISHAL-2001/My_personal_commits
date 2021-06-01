#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    if(n%2!=0)
    {
        for (int i = 0; i <= n / 2; i++) {
            int t;
            t = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = t;
        }
    }

    else
    {
        for (int i = 0; i < n / 2; i++)
        {
            int t;
            t = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = t;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i==n-1)
            printf("%d",arr[i]);
        else
            printf("%d ",arr[i]);
    }
    return 0;
}
