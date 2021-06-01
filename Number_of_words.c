#include <stdio.h>
#include <string.h>

char str[4096]={'\0'};
int main()
{
    fgets(str, 4096, stdin);
    char temp[strlen(str)];
    int i=0;


    //Left Trim
    while(str[i]==' ')
    {
        i++;
    }
    int j=0;
    for (;i<strlen(str);i++)
    {
        temp[j++]=str[i];
    }


/*    //Right Trim
    char temp1[strlen(temp)];
    i= strlen(temp)-1;
    printf("%ld\n", strlen(temp));
    while(temp[i]==' ')
    {
        i--;
    }
    printf("%d\n",i);
    for (int k=0;k<=i;k++)
    {
        temp1[k]=temp[k];
    }
*/
    //Computation of the Number of Words
    j=0;
    int c;
    if(temp[0]=='\0')
    {
        c=0;
    }
    else
    {
        c=1;
        for(;j< strlen(temp);j++)
        {
            if(temp[j]==' ')
            {
                c++;
            }
            else if(j== strlen(temp))
            {
                if (temp[j] == ',' || temp[j] == '?' || temp[j] == '.' || temp[j] == '!' || temp[j] == '@' ||
                    temp[j] == '{' || temp[j] == '}' || temp[j] == '[' || temp[j] == ']')
                    c++;
            }
        }
    }
    printf("The number of words in the sentence is : %d",c);
    return 0;
}