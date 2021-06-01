#include<stdio.h>
#include<stdlib.h>
int main()
{

    int x = 0;
    x = getchar();
    switch(x)
     {
        case 'a':
            printf("Apple\n");
            break;
        case 'b':
            printf("Ball\n");
            break;
        case 'c':
            printf("Cat\n");
            break;
        default :
            exit(0);
     }

}