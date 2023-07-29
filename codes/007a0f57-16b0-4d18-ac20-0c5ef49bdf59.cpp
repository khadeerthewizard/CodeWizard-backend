#include <iostream>
using namespace std;

int main() {
    int n, i, j;

    cout << "Enter the number of rows (odd number): "<<endl;
    cin >> n;

    // Check if n is an odd number
    if (n % 2 == 0) {
        cout << "Please enter an odd number." << endl;
        return 0;
    }

    // Upper half of the diamond
    for (i = 1; i <= n; i += 2) {
        // Spaces before the stars
        for (j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }

        // Stars
        for (j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half of the diamond
    for (i = n - 2; i >= 1; i -= 2) {
        // Spaces before the stars
        for (j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }

        // Stars
        for (j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
