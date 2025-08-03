#include <iostream>
using namespace std;

int main() {
    int a = 6, b = 3;

    cout << "Bitwise AND (a & b): " << (a & b) << endl;
    cout << "Bitwise OR (a | b): " << (a | b) << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << endl;
    cout << "Bitwise NOT (~a): " << (~a) << endl;
    cout << "Left Shift (a << 1): " << (a << 1) << endl;
    cout << "Right Shift (a >> 1): " << (a >> 1) << endl;

    return 0;
}

Output:
Bitwise AND (a & b): 2
Bitwise OR (a | b): 7
Bitwise XOR (a ^ b): 5
Bitwise NOT (~a): -7
Left Shift (a << 1): 12
Right Shift (a >> 1): 3
