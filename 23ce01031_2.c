#include<stdio.h>
int main() {
    int x,y,z;
    printf("enter three numbers");
    scanf("%d %d %d",&x,&y,&z);
    if (x>y) {
        if (x>z){ printf("%d is the largest integer",x);
    }else {printf("%d is the largest integer",z );
    }
    }
    else if(x<y) {
        if (y>z) { printf("%d is the largest integer",y);}
        else {printf("%D is the largest integer",z); }
    }
    return 0;
}