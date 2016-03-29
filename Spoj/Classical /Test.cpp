#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,a[1000],temp;
    for ( i = 0; i!=-1; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==42)
            break;
    }
    temp=i-1;
    for ( i = 0; i <=temp; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}