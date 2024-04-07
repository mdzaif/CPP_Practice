#include<bits/stdc++.h>
using namespace std;

int bs(int a[], int n, int item)
{
    int bg = 0;
    int en = n-1;
    int c = 0;
    while(bg<=en)
    {
        int mid =  bg+(en-bg)/2;
        if(a[mid] == item)
        {
            cout<<"No. of comparisions: "<<c++<<endl;
            return 1;
        }
        else if(a[mid]>item)
        {
            en = mid - 1;
            c++;
        }
        else if(a[mid]<item)
        {
            bg = mid + 1;
            c++;
        }
    }
    cout<<"No. of comparisions: "<<c<<endl;
    return -1;
}

int main()
{
    int t, n, item;
    cout<<"Enter the test case: ";
    cin>>t;
    while(t>0)
    {
    cout<<"Enter a size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array: ";
    int i = 0;
    while(i<n)
    {
        cin>>a[i];
        i++;
    }
    cout<<"Enter the item: ";
    cin>>item;
    int result = bs(a, n, item);
    if(result != 1)
    {
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    t--;
    }
    return 0;
}
