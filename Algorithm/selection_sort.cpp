#include<bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
    int i, j, index_min, temp;
    for(i = 0; i < n-1; i++)
    {
        index_min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[index_min])
            {
                index_min = j;
            }
        }

        if(index_min != i)
        {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    int k = 0;
    while(k < n)
    {
        cin>>a[k];
        k++;
    }
    selection_sort(a, n);
    k = 0;
    cout<<endl;
    while(k < n)
    {
        cout<<a[k]<<" ";
        k++;
    }
}
