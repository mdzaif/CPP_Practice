#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x, z, s = 0, c = 0;
   cin>>x;
   while(1){
    cin>>z;
   if (z <= x){
    continue;
    }
    while(x <= z)
    {
        s = s+x;
        x++;
        c++;
        if (s > z){
            break;
        }
    }
    cout<<c<<endl;
    break;

    }

    return 0;
}


