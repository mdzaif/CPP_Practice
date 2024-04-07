#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, k, item;
    cout<<"Enter the range of array: ";
    cin>>n;
    int arr[n], arr1[n];
    int i = 1;
    cout<<"Enter the array elements: ";
    while(i<=n)
    {
        cin>>arr[i];
        i++;
    }
    cout<<"Enter the location: ";
    cin>>k;
    cout<<"Enter the item: ";
    cin>>item;
    int j = n;
    i = 1;
    while (j >= k)
    {
        arr1[i] = arr[j];
        arr[j+1] = arr[j];
        c++;
        i++;
        j--;
    }
    arr[k] = item;
    n = n + 1;
    cout<<"No. of elements shifted: "<<c<<endl;
    cout<<"Values to be shifted: ";
    i = 1;
    while(c>=i)
    {
        cout<<arr1[c]<<" ";
        c--;
    }
    cout<<"\nFinal array: ";
    i = 1;

    while(i <= n)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    return 0;
}
