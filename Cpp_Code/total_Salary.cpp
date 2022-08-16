#include <bits/stdc++.h>
using namespace std;
    /*
    Write a program to calculate the total salary of a person.
    The user has to enter the basic salary (an integer) and 
    the grade (an uppercase character), and depending upon 
    which the total salary is calculated as -

        totalSalary = basic + hra + da + allow – pf

    */
 
int computeSalary(int basic,char grade)
{
    int allowance;
    double hra, da, pf;
 
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
 
    if (grade == 'A') {
        allowance = 1700;
    }
    else if (grade == 'B') {
        allowance = 1500;
    }
    else if (grade == 'C'){
        allowance = 1300;
    }
    int gross;
 
    gross = round(basic + hra + da + allowance - pf);
    cout << "Total Salary : ";
    return gross;
}
 
int main()
{
    int basic ;
    char grade;
    cout << "Enter the basic salary : " ;
    cin >> basic;
    cout << "Enter the grade (A,B or C):  ";
    cin >> grade;
 
    cout << computeSalary(basic, grade);
}