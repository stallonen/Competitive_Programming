#include <iostream>
#include <string.h>
#include <stdio.h>
void strhh(int k,int l)
{
    int i,j;
    int p=1,t;
    char arr[2];arr[0]='*';arr[1]='.';
    for ( i=1; i<=k; i++) {
        t=p;
        for (j=1; j<=l; j++) {
            if ((t%2)!=0)
             printf("*");
            else
                printf(".");
                    t++;
            }
        p++;
        printf("\n");
        }

}
int main(int argc, char const *argv[]) {
    int a,b;
    int t;
    scanf("%d",&t);
    while (t!=0) {
        scanf("%d %d",&a,&b);
        strhh(a,b);
        t--;
    }
  return 0;
}
