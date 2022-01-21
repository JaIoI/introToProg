#include <stdio.h>
int main(void)
{
    int a[10];
    int n, i;

    printf("N: ");
    scanf("%i",&n);

    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }

    for (i=0; i<n/2; ++i){
        printf("%i\n",a[i]);
        printf("%i\n",a[n-i-1]);
    }
    if (n%2 != 0 ) printf("%i\n",a[(n/2)]);

    return 0;
}
