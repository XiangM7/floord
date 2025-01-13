#include <iostream>
using namespace std;

int main() {
    // Declare two integers a and b
    long long a, b;
    
    // Read the input values
    cin >> a >> b;
    
    // Check if b is 0
    if (b == 0) {
        cout << "division by zero!!" << endl;
    } else {
        // Calculate and output the floor division result
        cout << a / b << endl;
    }
    
    return 0;
}
