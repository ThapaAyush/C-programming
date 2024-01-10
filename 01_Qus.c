//WAP that accepts the marks of 5 sudj & find the sum & % marks obtained.
#include<stdio.h>
int main () {

    int a,b,c,d,e;
    
    printf("Enter your marks of Math\n");
    scanf("%d",&a);
    printf("Enter your marks of Phy\n");
    scanf("%d",&b);
    printf("Enter your marks of Chy\n");
    scanf("%d",&c);
    printf("Enter your marks of Bio\n");
    scanf("%d",&d);
    printf("Enter your marks of Eng\n");
    scanf("%d",&e);

    int y = 0;
    y = (a+b+c+d+e);
    printf("The sum of your marks is %d\n",y);

    float fl = (y/500);
    printf("The total percentage marks you obtained is %2.2f",fl);

    return 0;
}



