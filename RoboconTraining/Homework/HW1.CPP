#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count[10] = {0};

    if (n == 0) {
        count[0] = 1;
    }


    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    cout << "Digit counts:"<<endl;
    for (int i = 0; i <= 9; i++) {
        cout << i << ": " << count[i] << endl;
    }

    return 0;
}
