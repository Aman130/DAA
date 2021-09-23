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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        for(int i=n-1;i>=0;i--){
            int sum=a[i];
            int l=0,r=n-1;
            while(l<r){
                if(l==i) l++;
                if(r==i) r--;
                if(a[l]+a[r]==sum){
                    cout<<l+1<<" "<<r+1<<" "<<i+1<<"\n";
                    f=1;
                    break;
                }
                else if(a[l]+a[r]>sum) r--;
                else l++;
            }
        }
        if(f==0) cout<<"Not Found\n";
    }
    return 0;
}