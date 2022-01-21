#include <stdio.h>


int main(void)
{
  int a[10];
  int d,n, i,pow;

  printf("N: ");
  scanf("%i",&n);

  printf("A[0]: ");
  scanf("%i",&a[0]);

  printf("D: ");
  scanf("%i",&d);
  pow=1;
  for (i=1; i<n; ++i){
    pow*=d;
    a[i]=a[0]*pow;
  }
  for (i=0; i<n; ++i) printf("%i : %i\n",i,a[i]);
  return 0;
}
