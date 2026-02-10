#include <iostream>
using namespace std;

int main() {
    bool p = 0;
    bool q = 0;
    //pXORq Calculation
    bool pXORq = !p&&q || p&&!q;

    cout << (p ^ q);
    cout << pXORq;


}
