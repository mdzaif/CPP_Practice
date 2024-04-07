#include<bits/stdc++.h>
using namespace std;

void print_array(int p[], int n1)
{
    int k = 1;
    while(k <= n1)
    {
        cout<<" "<<p[k];
        k++;
    }
    cout<<endl<<endl;
    return;
}
int insert_item(int a[], int n, int item, int index)
{
    int j = n;
    while(j >= index)
    {
        a[j+1] = a[j];
        j--;
    }
    a[index] = item;
    n++;
    return n;
}

int delete_item(int b[], int t, int item)
{
    int j = 1;
    int pos;
    while(j<t)
    {
        if (b[j]==item)
        {
            pos = j;
            break;
        }
        j++;
    }
    j = pos;
    while(j <= t)
    {
        b[j] = b[j+1];
        j++;
    }
    t--;
    return t;
}

int* update_item(int a[], int n, int k)
{
    int j = 1;
    while(j <= n)
    {
        a[j] += k;
        j++;
    }
    return a;
}

int* sort_array(int a[], int n)
{
    int i, j, temp;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j <=n-1; j++)
        {
            if(a[j]>a[j+1])
            {
              temp = a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
            }
        }
    }
    return a;
}

int main()
{

    int n, in, loc;
    cout<<"Enter the array size: ";
    cin>>n;
    int *a = new int[n];//heap the array.
    int i = 1;
    cout<<"Enter the value of array: ";
    while(i<=n)
    {
        cin>>a[i];
        i++;
    }
    cout<<endl;
    while(1)
    {
        cout<<endl;
        cout<<"Current array:";
        print_array(a, n);
        cout<<"What do you want to do?"<<endl;
        cout<<"1. Insert\n2. Delete\n3. Update\n4. Sort\n5. Stop\n";
        int menu;
        cout<<"Type here: ";
        cin>>menu;
        if (0>menu || menu>5)
        {
            cout<<"Invalid Input"<<endl;
            continue;
        }
        else if(menu == 1)
        {

            cout<<"Enter the item: ";
            cin>>in;
            cout<<"Enter the location: ";
            cin>>loc;
            n = insert_item(a, n, in, loc);
            cout<<"After insert:";
            print_array(a, n);

        }
        else if(menu == 2)
        {
            cout<<"Enter the item: ";
            cin>>in;
            n = delete_item(a, n, in);
            cout<<"After delete:";
            print_array(a, n);
        }
        else if(menu == 3)
        {
            cout<<"Enter a number to add in all elements: ";
            cin>>in;
            update_item(a, n, in);
            cout<<"After update:";
            print_array(a, n);
        }
        else if(menu == 4)
        {
            sort_array(a, n);
            cout<<"After sorting:";
            print_array(a, n);
        }
        else if (menu == 5)
        {
            break;
        }
    }
    delete [] a;//clean the memory.
    return 0;
}
