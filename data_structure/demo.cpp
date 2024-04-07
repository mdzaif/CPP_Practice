/*#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n >1){
        return n * fact(n-1);
    }
    else
        return 1;
}
int main()
{
    int n;
    cin>>n;
    cout<<"factorial of "<<n<<" is "<< fact(n)<<endl;
    return 0;
}
