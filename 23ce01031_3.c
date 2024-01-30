#include<stdio.h>
int main() {
    int a,b,c;
    printf("enter three sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    (((a+b)>c)&&((a+c)>b)&&((b+c)>a))?
    printf("They can form a triangle"):printf("they cannot form a triangle");
    return 0;
}