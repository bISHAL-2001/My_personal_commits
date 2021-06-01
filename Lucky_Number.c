#include <stdio.h>
int main()
{
    int n;int s;
    scanf("%d",&n);
    s = n;
    while(s>9) {
        s = 0;
        while (n != 0) {
            int d = n % 10;
            s += d;
            n /= 10;
        }
        n = s;
    }
    if(s==1)
        printf("lucky number");
    else
        printf("not lucky number");
}