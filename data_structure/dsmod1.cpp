#include<bits/stdc++.h>
using namespace std;

int c;
int i= 0;
int x = 0;
int k = 0;
int bs(int a[], int n, int compare[],  int bg, int en, int item)
{
    if(bg<=en)
    {
        int mid = bg+(en-bg)/2;
        if(a[mid] == item)
        {
            x = 1;


        }
        else if(a[mid]>item)
        {
            compare[i]= a[mid];
            c++;
            i++;
            return bs(a, n, compare, bg, mid-1, item);
        }
        else
        {
            compare[i] = a[mid];
            c++;
            i++;
            return bs(a, n, compare, mid+1, en, item);
        }
    }
    k = i;
    if(x = 1){
            cout<<"NO. of comparisions: "<<c<<endl;
            cout<<"comparisions: ";
            i = 0;
        while(i<k)
        {
            cout<<compare[i]<<" ";
            i++;
        }
    cout<<endl;
    return 1;
    }
     else{
            cout<<"NO. of comparisions: "<<c<<endl;
            cout<<"comparisions: ";
            i = 0;
        while(i<k)
        {
            cout<<compare[i]<<" ";
            i++;
        }
    cout<<endl;
    }
    return -1;

}


int main()
{
    int t,n, item;
    int compare[k];
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
    int result = bs(a, n, compare, 0, n-1, item);
    if(result == -1)
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


