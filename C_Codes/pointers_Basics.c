#include <stdio.h>

int func(int x, int *ptr , int **pptr){
    int y,z;

    **pptr += 1;

    z = **pptr;

    *ptr += 2;

    y = *ptr;

    x += 3;

    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);

    printf("\n");
    printf("x + y + z =  ");

    return(x + y + z);
}

int i = 10, j = 15;

int main() {
    int c, *b, **a ;

    c = 4;
    b = &c;
    a = &b;

    printf("%d" ,func(c, b, a));
    
    return 0;
}