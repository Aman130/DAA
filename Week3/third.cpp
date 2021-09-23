#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int f=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]==a[j+1])
            {
                cout<<"YES\n";
                f=1;
                break;
            }
        }
        if(f==0) cout<<"NO\n";
    }
    return 0;
}