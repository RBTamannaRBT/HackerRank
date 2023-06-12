#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n],b[2];
    b[0]=0,b[1]=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }
    for(int i=0; i<n; i++) b[0]+=a[i][i];
    for(int j=n-1,i=0; i<n; i++, j--) b[1]+=a[i][j];
    cout<<abs(b[0]-b[1])<<"\n";
}