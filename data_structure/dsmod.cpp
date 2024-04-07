#include<bits/stdc++.h>
using namespace std;

int c;

int bs(int a[], int n, int bg, int en, int item)
{
    if(bg<=en)
    {
        int mid = bg+(en-bg)/2;
        if(a[mid] == item)
        {
            return 1;
        }
        else if(a[mid]>item)
        {
            c++;
            return bs(a, n, bg, mid-1, item);
        }
        else
        {
            c++;
            return bs(a, n, mid+1, en, item);
        }
    }
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
    int result = bs(a, n, 0, n-1, item);
    cout<<"NO. of comparisions: "<<c<<endl;
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
