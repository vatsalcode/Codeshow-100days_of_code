#include<iostream>
using namespace std;
#define repeat(x) for(int _iterator_i = 0; _iterator_i < x; _iterator_i++)
#include<cmath>
int main() {
int n;
cin >> n;
int cnt_of_ones = 0;
while (n != 0) {
if (n % 2 == 1) {
cnt_of_ones++;
}
n = n / 2;
}
cout << cnt_of_ones << endl;
}
