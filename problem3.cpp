#include <iostream>
using namespace std;
int main() {
    int x = 0;
    int sum = 0;
    int m;
    int n, a, b;
    cin >> n >> a >> b;
    for (int i = x; i <= n; i++) {
        int k = i;
        while (k > 0) {
            m = k % 10;
            sum = sum + m;
            k = k / 10;
        }

        if (sum >=a && sum <=b) {
            x+=i;
        }

        sum=0;
    }

    cout << x << endl;

    return 0;
}
