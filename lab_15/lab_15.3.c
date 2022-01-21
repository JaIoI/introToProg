#include <stdio.h>

float rings(float r1, float r2){
 return 3.14*(r1*r1-r2*r2);
}

int main(void)
{
    int i;
    for(i=1; i<=3; ++i){
        float r1,r2;
        printf("R1:");
        scanf("%f", &r1);
        printf("R2:");
        scanf("%f", &r2);
    printf("S:%f\n",rings(r1,r2));
    }
    return 0;
}
