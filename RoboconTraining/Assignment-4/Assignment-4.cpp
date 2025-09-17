#include <iostream>
using namespace std;

int map(int value, int in_start, int in_end, int out_start, int out_end) {
    return (value - in_start) * (out_end - out_start) / (in_end - in_start) + out_start;
}

int main() {
    int value = 50;
    int mappedValue = map(value, 0, 100, 0, 255);
    cout << "Original value: " << value << std::endl;
    cout << "Mapped value: " << mappedValue << std::endl;
    return 0;
}
