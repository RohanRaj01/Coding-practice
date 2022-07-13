// Simple Interst
#include <stdio.h>

int main(){
    float p, r, t, simpleInterest;
    printf("Enter the principal amount :- ");
    scanf("%f", &p);
    printf("Enter the rate of interest :- ");
    scanf("%f", &r);
    printf("Enter the time (in years) :- ");
    scanf("%f", &t);

    simpleInterest = (p * r * t)/100;
    printf("Simple Interest :- %f", simpleInterest);

    return 0;

}
