#include <iostream>
using namespace std;
int main() {
    int number;
    int sum = 0;

    cout << "Enter positive numbers (enter a negative number to end):" << endl;
    
    do {
        cin >> number;
        if (number >= 0) {
            sum += number;
        }
    } while (number >= 0);

    cout << "Sum of positive numbers: " << sum << endl;

    return 0;
}
