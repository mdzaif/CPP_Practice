#include<bits/stdc++.h>
using namespace std;

int main()
{
   int a, n, s = 0;
   cin>>a;
   while(1){
    cin>>n;
   if (n <= 0){
    continue;
    }
    for(int i = 1; i <=n ;i++){
        s = s+a;
        a++;
    }
    cout<<s<<endl;
    break;
   }
    return 0;
}




