#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d\n%d", &a, &b);
    printf("Sum= %d\nSubtraction:\n        (%d-%d)=%d\n        (%d-%d)=%d",a+b,a,b,a-b,b,a,b-a);
}
