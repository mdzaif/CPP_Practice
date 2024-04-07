#include<bits/stdc++.h>
using namespace std;

int main()
{
    int id[8]= {0, 2, 4, 0, 7, 2, 5, 5};
    int i, j, temp, n = 8;

    //bubble sort algorithm implement.
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(id[j]<id[j+1])
            {
                temp = id[j];
                id[j]= id[j+1];
                id[j+1] = temp;
            }
        }
    }

    //output of bubble sort.
    i = 0;
    while(i<8)
    {
        cout<<id[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}



