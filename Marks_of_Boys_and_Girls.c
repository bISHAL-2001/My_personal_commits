#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d\n",&marks[i]);
    }
    char gen=getchar();
    gen= tolower(gen);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(gen=='g')
            sum+=(i%2!=0)?marks[i]:0;
        else if(gen=='b')
            sum+=(i%2==0)?marks[i]:0;
    }
    printf("%d",sum);
    return 0;
}