#include <iostream>
#define repeat(x) for (int _iterator_i = 0; _iterator_i<x;_iterator_i++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{ 
int n;
cin >> n;
// print the vertical bar
repeat(3*n){
repeat(n){
cout <<'*';
}
cout << endl;
}
// print the horizontal bar
repeat(n){

repeat(4*n){
cout <<'*';
}
cout << endl;
}
}
