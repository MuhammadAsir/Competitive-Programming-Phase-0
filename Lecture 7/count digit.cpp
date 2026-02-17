#include <iostream>
using namespace std;

int main() {
    for (int digit = 0; digit <= 9; digit++) {
        int count = 0;
        for (int number = 1; number <= 50; number++) {
            int temp = number;
            while (temp > 0) {
                int last_digit = temp % 10;
                if (last_digit == digit) {
                    count++;
                }
                temp /= 10;
            }
        }
        cout << digit << " occurs " << count << " times\n";
    }
    return 0;
}
