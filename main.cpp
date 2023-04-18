#include <iostream>
#include <cmath>
using namespace std;

double cal_eq(int n) {
    if (n == 0) {
        return 0;
    }
    double result = cal_eq(n - 1) + (pow(n, 2) + 1) / (n + 3.0);
    return result;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    double result = cal_eq(n);
    cout << "RESULT: " << result << endl;
    return 0;
}

