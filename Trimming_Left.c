#include <string.h>
#include <stdio.h>

char str[4096];
int main()
{
    fgets(str, 4096, stdin);
    printf("Original String: \n%s\n", str);
    int i=0;
    while(str[i]==' '||str[i]=='\t')
    {
        i++;
    }
    int j=0;
    char temp[strlen(str)];
    for (;i<=strlen(str);i++)
    {
        temp[j++]=str[i];
    }
    printf("Trimmed String:\n%s\n", temp);
    return 0;
}