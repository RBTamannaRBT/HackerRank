#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin>>c;
    double a[c],p=0,n=0,z=0;
    for(int i=0; i<c; i++)
    {
        cin>>a[i];
        if(a[i]>0) p++;
        else if(a[i]<0) n++;
        else z++;
    }
    cout<<fixed<<setprecision(6)<<p/c<<"\n";
    cout<<fixed<<setprecision(6)<<n/c<<"\n";
    cout<<fixed<<setprecision(6)<<z/c<<"\n";
}
