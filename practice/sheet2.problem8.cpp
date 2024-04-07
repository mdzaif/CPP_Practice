#include<bits/stdc++.h>
using namespace std;

int main()
{
    long double a, n, k;
    cin>>a>>n>>k;
    //long long int k = 2,147,483,647;
    long double c = (n*k)/a;
    if(c <= 2,147,483,647)
    {
        cout<<"int"<<endl;
    }
    else if(c> 2,147,483,647)
    {
        cout<<"long long"<<endl;
    }
    else
    {
        cout<<"double"<<endl;
    }
    return 0;
}
