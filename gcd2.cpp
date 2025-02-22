#include <iostream>
#include <algorithm>
using namespace std;

// Calculate GCD of two numbers
int Gcd(int a, int b) {
    for (int i = min(a, b); i > 0; i--) { // Check from min(a, b) down to 1
        if (a % i == 0 && b % i == 0) { // If i is a divisor of both
            return i; // Return GCD
        }
    }
    return 1; // GCD is 1 if no common divisors found
}

int main() {
    int a, b; 
    cin >> a;
    cin >> b; 

    int gcd = Gcd(a, b); // Calculate GCD
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    return 0; 
}
