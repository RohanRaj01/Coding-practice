#include<stdio.h>
int main(){
    int num, i, fact = 1;
    printf("Enter an integer :- ");
    scanf("%d", &num);
    if(num < 0){
        printf("Error, Factorial of a negative number does not exist");
    } 
    else if(num == 0){
        printf("Factorial of 0 is 0 ");
    }
    else{
        for(i = 1; i <= num; i++){
            fact *= i;
        }
        printf("factorail of %d = %d ", num, fact);
    }
    return 0;
}