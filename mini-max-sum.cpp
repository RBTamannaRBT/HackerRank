#include<bits/stdc++.h>
using namespace std;

int main()
{
   long int min=0, max=0, s=0, x[5];
    for(int i=0; i<5; i++)
    {
        cin>>x[i];
        s+=x[i];
    }
    min=x[0], max=x[0];
    for(int i=0; i<5; i++)
    {
        if (x[i]<min) min=x[i];
        if (x[i]>max) max=x[i];
    }
    cout<<s-max<<" "<<s-min<<'\n';
}