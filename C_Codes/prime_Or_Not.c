#include<stdio.h>

int main() {
    int num;
    printf ("Enter a Number :  ");
    scanf("%d", &num);
    int isPrime = 1;
    printf ("\n");

    for (int i = 2; i * 1 < num; i++){
        if (num % i == 0) {
            isPrime = 0;
        }
    }
    if(isPrime){
        printf("%d  is a Prime Number. \n", num);
    }
    else{
        printf("%d is Not a Prime Number. \n", num);
    }
    return 0;
}