#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {
    // base case
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}

// sum numbers between m and n

int main()
{
    int m=1, n=5;

    // solve this problem using recursion
    cout << "Sum = " << recursive_sum(m, n) << endl;

    // // solve this problem using loops
    // int sum = 0;
    // for(int i=m; i <= n; i++) {
    //     sum += i;
    // }

    // cout << "Sum= " << sum << endl;

    return 0;
}