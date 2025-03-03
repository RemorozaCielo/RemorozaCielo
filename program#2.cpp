#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "The number is even ";
    else
        cout << "The number is odd ";

    if (num > 0)
        cout << "and positive." << endl;
    else if (num < 0)
        cout << "and negative." << endl;
    else
        cout << "and zero." << endl;

    return 0;
}
