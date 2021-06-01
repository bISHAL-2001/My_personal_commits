#pragma clang diagnostic push
#pragma ide diagnostic ignored "bugprone-branch-clone"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char n;
    while(1>0)
    {
        printf("Enter a choice(a,b,c): ");
        scanf("%s", &n);
        switch(n) {
            case 'a':
                printf("Apple\n");
                break;
            case 'A':
                printf("Apple\n");
                break;
            case 'b':
                printf("Ball\n");
                break;
            case 'B':
                printf("Ball\n");
                break;
            case 'c':
                printf("Cat\n");
                break;
            case 'C':
                printf("Cat\n");
                break;
            default:
                printf("Sorry did not get you!\n");
                exit(0);
        }
    }
}