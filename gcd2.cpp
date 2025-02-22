#include <iostream>
#include <algorithm>
using namespace std;
int Gcd(int a, int b) {
    for(int i = min(a, b); i > 0; i--) {
        if(a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}
int main() {
    int a,b;
    cin>>a;
  cin>>b;
    int gcd = Gcd(a,b);
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;
    return 0;
}


                                
                            
