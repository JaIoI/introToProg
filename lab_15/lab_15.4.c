#include <stdio.h>

int quarter(float x, float y){
    if ((x>0)&&(y>0)){return 1;}
    if ((x<0)&&(y>0)){return 2;}
    if ((x<0)&&(y<0)){return 3;}     if ((x>0)&&(y<0)){return 4;}
}
 
int main(void)
{
    int i;
    for (i=1; i<=3; ++i){
        float x,y;
        printf("X:");
        scanf("%f", &x);
        printf("Y:");
        scanf("%f", &y);
        printf("Quarter:%i\n",quarter(x,y));
     }
    return 0;
}
