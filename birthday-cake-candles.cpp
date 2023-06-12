#include<bits/stdtr1c++.h>
using namespace std;
int main()
{
    int n, m=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>m) m=a[i];
    }
    cout<<count(a, a+n, m)<<'\n';
}