#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
