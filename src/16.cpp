#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << "Input: " << n << endl;
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0)
                cout << i * i << " ";
            else
                cout << i + 1 << " ";
        }
    } else {
        cout << "Input is not valid" << endl;
    }

    return 0;
}
