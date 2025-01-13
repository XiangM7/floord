#include <iostream>
using namespace std;

int main() {
    // Declare two integers a and b
    long long a, b;
    // Read the input values
    cin>>a>>b;
    // Check if b is 0 or not
    if (b==0) {
        cout << "division by zero!!"<<endl;
    } else {
        // Calculate and output
        cout<<a/b<<endl;
    }
    return 0;
}
