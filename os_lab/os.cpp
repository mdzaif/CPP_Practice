#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p, r, i, j, t = 0, c = 0;

    cout<<"Enter the process number: ";
    cin>>p;
    cout<<"Enter the resource number: ";
    cin>>r;
    int alloc[p][r], m_x[p][r], need[p][r], work1[r][r];
    int work[r], total[r], process[p];
    bool finish[p];

    //take the process allocation
    cout<<"Enter the allocation numbers: "<<endl;
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < r; j++)
        {
            cin>>alloc[i][j];
        }
    }

    //taking max allocation for process.
    cout<<"Enter the max allocation for process: "<<endl;
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < r; j++)
        {
            cin>>m_x[i][j];
        }
    }

    //taking the instances
    cout<<"Enter the instances for "<<r<<" types:"<<endl;
    for(i = 0; i < r; i++)
    {
        cin>>work[i];
    }

    //calculate the need
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < r; j++)
        {
            need[i][j] = m_x[i][j] - alloc[i][j];
        }
    }
    total[t] = 0;
    for(j = 0; j < r; j++)
    {
        total[t] = 0;
        for(i = 0; i < p; i++)
        {
            total[t] = total[t] + alloc[i][j];
        }
        t++;
    }

    //current work
    for(i = 0; i < r; i++)
    {
        work[i] = work[i] - total[i];
    }

    //algorithm
    t = 0;
    int k = 0;
    while(c != p-1)
    {

        for(i = 0; i < n; i++)
        {
            if(need[x][i]<work[i])
        }

    }

    //output

    cout<<"Process: ";
    for(i = 0; i < p; i++)
    {
        cout<<process[i]<<" ";
    }
    cout<<endl;

    cout<<"Allocation: "<<endl;
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < r; j++)
        {
            cout<<alloc[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Available: "<<endl;
    for(i = 0; i < r; i++)
    {
        cout<<work[i]<<" ";
    }
     cout<<endl;


    cout<<"Need: "<<endl;
    for(i = 0; i < p; i++)
    {
        for(j = 0; j < r; j++)
        {
            cout<<need[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
