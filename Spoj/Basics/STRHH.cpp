#include <iostream>
#include <string.h>
#include <stdio.h>
void strhh(char s[])
{
    unsigned long int half= strlen(s)/2;
    int counter=0;
    while (counter<half) {
        printf("%c",s[counter]);
        counter+=2;
    }
    printf("\n");
}
int main(int argc, char const *argv[]) {
    char c[201];
    int t;
    scanf("%d",&t);
    while (t!=0) {
        scanf("%s",c);
        strhh(c);
        t--;
    }
  return 0;
}
