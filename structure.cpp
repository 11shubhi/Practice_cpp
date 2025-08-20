#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Checking if else" << endl;
    cout << "Enter the integer value" << endl;
    cin >> a;

    if (a < 40) {
        cout << "The number is below 40" << endl;
    } else if (a == 40) {
        cout << "The number is exactly 40" << endl;
    } else {
        cout << "The number is above 40" << endl;
    }

    
    system("pause");   // a window specific command 
    return 0;
}
