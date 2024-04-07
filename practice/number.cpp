#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    cout<<"A = "<<a<<","<<" B = "<<b<<","<<" C = "<<c<<endl;
    cout.fill(' ');
    cout<<"A = "<<setw(10)<<right<<a<<","<<" B = "<<setw(10)<<right<<b<<","<<" C = "<<setw(10)<<right<<c<<endl;
    cout.fill('0');
    cout<<"A = "<<setw(10)<<internal<<a<<","<<" B = "<<setw(10)<<internal<<b<<","<<" C = "<<setw(10)<<internal<<c<<endl;
    cout.fill(' ');
    cout<<"A = "<<setw(10)<<left<<a<<","<<" B = "<<setw(10)<<left<<b<<","<<" C = "<<setw(10)<<left<<c<<endl;
    return 0;
}
/*#include<iostream>
#include<iomanip>
using namespace std;
int main() {
   int number = 256; //want to print 00000256, so total 8
   //characters
   cout << setw(8) << setfill('0') << number;
}*/
