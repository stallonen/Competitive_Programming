#include <iostream>
int main(int argc, char const *argv[]) {
  int l,c,i,j,t;
  scanf("%d\n",&t);
  while (t--) {
    scanf("%d %d",&l,&c);
    for (i = 0; i <(3*l)+1; i++) {
      for (j = 0; j < (3*c)+1; j++) {
        if (i%3==0 || j%3==0)
          printf("*");
        else
          printf(".");
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}
