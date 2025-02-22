#include <iostream>
#include <algorithm>
using namespace std;

// Calculate GCD of two numbers
int Gcd(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b; // Reduce a
        } else {
            b = b % a; // Reduce b
        }
    }
    return (a == 0) ? b : a; // Return non-zero value
}

int main() {
    int n1, n2; 
    cin >> n1; 
    cin >> n2; 

    int gcd = Gcd(n1, n2); // Calculate GCD
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl; 
    return 0; 
}
