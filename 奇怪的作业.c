#include<stdio.v>
int main(void)
{
    int a,b,c,d,x;
    float y;
    printf("Enter a:");
    scanf("%d",&a);
   printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");
    scanf("%d",&d);
    x=a+b+c+d;
    y=(a+b+c+d)/4;
    printf("x=%d,y%.1f\n",x,y);
    return 0;
}