#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    if (n % 2 == 0) {
        cout << n * n / 2.0;
    } else {
        cout << n + n * n - 1;
    }
    return 0;
}
