#include <stdio.h>

int main(){
    int a = 0,b = 1, count = 2, n;
    printf("Enter the nth term : - ");
    scanf("%d", &n);
    printf("Fibonacci Series :- 0 , 1 ") ;
    while (count <= n){
        int temp = b;
        b += a;
        a = temp;
        printf(",%d ", b );
        count++;
    }
    
}