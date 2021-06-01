//copying input to output
//ends on Crtl+d

#include <stdio.h>
int main()
{
    int c;
    c = 0;
    while(c!=EOF)
    {
        putchar(c);
        c=getchar();
    }
}
