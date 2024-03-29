#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {
    // base case
    if (m == n)
        return m;
    return m + recursive_sum(m + 1, n);
}

int find_factorial(int m) {
    if (m == 1)
        return 1;
    return m * find_factorial(m-1);
}

// sum numbers between m and n

int main()
{
    int m=1, n=5;

    // solve this problem using recursion
    cout << "The sum of the numbers from " << m << " to " << n << " is: ";
    cout << "Sum = " << recursive_sum(m, n) << endl;

    // // solve this problem using loops
    // int sum = 0;
    // for(int i=m; i <= n; i++) {
    //     sum += i;
    // }

    // cout << "Sum= " << sum << endl;

    int p = 9;

    // I wrote this part, tested it. It works.
    // find the factorial of a number p
    // if p is 9, the result is 362,880
    cout << "The factorial of " << p << " is: " << find_factorial(p);

    return 0;
}