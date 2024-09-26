#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    for (int i = x; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int k = 0; k <= (x-i)*2-1; k++) {
            cout << " ";
        }

        for (int q = i; q > 0; q--) {
            cout << q;
        }
        cout << endl;
    }


    return 0;
}