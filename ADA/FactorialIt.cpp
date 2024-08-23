Factorial Using Iterative Method

#include <iostream>
using namespace std;

unsigned long long factorial_iterative(int n) {
    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial (Iterative) of " << n << " is " << factorial_iterative(n) << endl;
    return 0;
}
