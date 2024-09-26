#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the position N: ";
    cin >> N;

    int count = 0;
    int current = 1;

    while (count < N) {
        // Check if the current number is not divisible by 3 and does not end with 3
        if (current % 3 != 0 && current % 10 != 3) {
            count++;
        }
        // When we reach the Nth valid number, print it
        if (count == N) {
            cout << "The number at position " << N << " is: " << current << endl;
            break;
        }
        current++;
    }

    return 0;
}