#include<iostream>
#define repeat(x) for(int _iterator_i = 0; _iterator_i < x; _iterator_i++)
#include<cmath>
#include<iomanip>
#define main_program int main()
using namespace std;
main_program{
int N; cin >> N;
int weighted_sum = 0, sem_credits = 0;
repeat(N) {
char grade; int credit;
cin >> grade >> credit;
int num_grade = 10 - (grade - 'A');
weighted_sum += credit * num_grade;
sem_credits += credit;
}
double curr_cpi ;
int credits_till ;
cin >> curr_cpi >> credits_till;
cout << fixed << setprecision(2) << weighted_sum * 1.0 / sem_credits << " ";
cout<< fixed << setprecision(2) << (curr_cpi * credits_till + weighted_sum )/(sem_credits + credits_till);
}
