#include<stdio.h>

int main(){
    int num, original_num, remainder, result = 0;
    printf("Enetr a three digit integer :  ");
    scanf("%d", &num);
    original_num = num;
    while(num != 0){
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }
    if (result == original_num){
        printf("%d  is an Armstrong number ",original_num);
    }
    else{
        printf("%d  is not an Armstrong number ",original_num);
    }
    return 0;
}