#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,nbr1 = 0, nbr2 = 1, next;
    cin>>n;
    if (n >= 0 && n <= 46){
    for(int i = 0; i < n; i++)
    {
        {
    if (i <= 1){
      next = i;
      cout<<next<<" ";
    }
    else if (i != n-1)
    {
      next = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = next;

      cout<<next<<" ";
    }
    else if (i == n-1)
    {
      next = nbr1 + nbr2;
      nbr1 = nbr2;
      nbr2 = next;
      cout<<next<<endl;
    }

        }
    }
    //cout<<endl;
    //return 0;
}
return 0;
}

//2 = i-1 + i -i
