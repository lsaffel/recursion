#include <iostream>
using namespace std;

// sum numbers between m and n

int main()
{
    // solve this problem using loops
    int m=2, n=4;
    int sum = 0;
    for(int i=m; i <= n; i++) {
        sum += i;
    }

    cout << "Sum= " << sum << endl;

    return 0;
}