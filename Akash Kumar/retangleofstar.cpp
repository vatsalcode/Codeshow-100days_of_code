#include <iostream>
// #include <simplecpp>
#define repeat(x) for(int _iterator_i = 0; _iterator_i<x;_iterator_i++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
int n;
cin >> n;
// print the rectangle
repeat(n){

repeat(2*n){
cout <<'*';
}
cout << endl;
}
}
