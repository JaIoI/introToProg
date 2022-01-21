#include 
 
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
 
    for (i=0; i<n; i+=2)             printf("%i\n",a[i]);       for (i=n-(n%2)-1; i>=1; i-=2)
            printf("%i\n",a[i]);
 
    return 0;
}
