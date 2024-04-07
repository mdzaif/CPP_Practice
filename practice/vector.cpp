#include<iostream>
#include<vector>
using namespace std;

/*int main()
{
    vector<int> g1;
    for(int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }
    cout<<"\nOutput of begin and end: ";
    for(auto i = g1.begin(); i != g1.end(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<"\nOutput of begin and cend: ";
    for(auto i = g1.cbegin(); i != g1.cend(); ++i)
    {
        cout<<*i<<" ";
    }
    cout<<"\nOutput of rbegin and rend; ";
    for(auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
    {
        cout<<*ir<<" ";
    }
    cout<<"\nOutput of crbegin and crend: ";
    for(auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
    {
        cout<<*ir<<" ";
    }

    return 0;
}*/
/*int main()
{
    vector<int> g1;
    for(int i = 1; i<=5; i++)
    {
        g1.push_back(i);
    }
    cout<<"Size: "<<g1.size();
    cout<<"\nCapacity: "<<g1.capacity();
    cout<<"\nMax_Size: "<<g1.max_size();
    g1.resize(4);
    cout<<"\nSize: "<<g1.size();
    if (g1.empty()==false)
        cout<<"\nVector is not empty";
    else
        cout<<"\nVector is empty";
    g1.shrink_to_fit();
    cout<<"\nVector elements are: ";
    for(auto it = g1.begin(); it != g1.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}*/

int main()
{
    vector <int> g1;

    for(int i = 1; i <= 10; i++){
        g1.push_back(i*10);
    }
    cout<<"Reference Operator [g] : g1[2] = "<<g1[2];
    cout<<"\nat : g1.at(4) = " <<g1.at(4);
    cout<<"\nfront : g1.front() = " <<g1.front();
    cout<<"\nback : g1.back() = " <<g1.back();
    // pointer to the first element

    int* pos = g1.data();
    cout<<"\nThe first element is = " <<*pos;
    return 0;
}
