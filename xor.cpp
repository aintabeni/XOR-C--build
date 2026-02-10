#include <iostream>
using namespace std;

int main() {
    bool p , q;
    //pXORq Calculation
    bool pXORq = !p&&q || p&&!q;
    //Checking if pXORq is correct for p = true and q = true
    p = true;
    q = true;
    cout << p << " XOR " << q << " is " << pXORq << endl;
    
    //Checking if pXORq is correct for p = false and q = true
    p = false;
    q = true;
    cout << p << " XOR " << q << " is " << pXORq << endl;

    //Checking if pXORq is correct for p = true and q = false
    p = true;
    q = false;
    cout << p << " XOR " << q << " is " << pXORq << endl;

    //Checking if pXORq is correct for p = false and q = false
    p = false;
    q = false;
    cout << p << " XOR " << q << " is " << pXORq << endl;


}
