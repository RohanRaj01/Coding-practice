#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : \n");
    scanf("%d", &year);

    if (year % 400 == 0){
        printf("%d  is a Leap year.");
    }
    else if (year % 100 == 0){
        printf("%d  is not a Leep year.");
    }
    else if(year % 4 == 4){
        printf("%d  is a Leep year.");
    }
    else{
        printf("%d  is not a Leep year.");
    }

    return 0;
}