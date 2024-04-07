#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int A[], int n)
{
    int i, j, item;

    for(i = 1; i < n; i++)
    {
        item = A[i];

        j = i - 1;
        while(j >= 0 && A[j] > item)
        {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;
    }
}

int main()
{
    int s;
    cin>>s;
    int a[s];
    int i = 0;
    while(i < s)
    {
        cin>>a[i];
        i++;
    }
    insertion_sort(a, s);
    i = 0;
    while(i < s)
    {
        cout<<a[i]<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}
