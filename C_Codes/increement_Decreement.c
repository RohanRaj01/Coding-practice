#include <stdio.h>

int main(){
    int a = 50;
    int c = a++;
    printf("a++ :  %d \n", c);
    int d = ++a;
    printf("++a :  %d \n", d);
    printf("\n");
   
    int g = a++ + a++;
    printf("a++ + a++ :  %d \n", g);
    int h = ++a + ++a;
    printf("++a + ++a :  %d \n", h);
    int i = a++ + ++a;
    printf("a++ + ++a :  %d \n", i);
    int j = ++a + a++;
    printf("++a + a++ :  %d \n", j);
    printf("\n");

    a = 50;

    int e = a--;
    printf("a-- :  %d \n", e);
    int f = --a;
    printf("--a :  %d \n", f);


    int k = a-- + a--;
    printf("a-- + a-- :  %d \n", k);
    int l = --a + --a;
    printf("--a + --a :  %d \n",l);
    int m = a-- + --a;
    printf("a-- + --a :  %d \n",m);
    int n = --a + a--;
    printf("--a + a-- :  %d \n",n);

    return 0;
}