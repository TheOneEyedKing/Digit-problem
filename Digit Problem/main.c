#include <stdio.h>
#include<math.h>
int main()
{
    char num[19];
    int x,i=0,j=0;
    scanf("%s",num);
    scanf(" %d",&x);
    while(j<x)
    {
        if(num[i]!='9')
        {
             num[i]='9';
             i++;
             j++;
        }
        else
            i++;
    }
    printf("%s",num);
    return 0;
}
