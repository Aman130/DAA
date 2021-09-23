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
        int comparison=0,swaps=0;
        for(int i=0;i<n-1;i++)
        {
            int minind=i;
            for(int j=i+1;j<n;j++)
            {
                comparison++;
                if(a[j]<a[minind])
                minind=j;
            }
            int temp=a[minind];
            a[minind]=a[i];
            a[i]=temp;
            swaps++;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
        cout<<"Comparison "<<comparison<<"\n"<<"Swaps "<<swaps<<"\n";
    }
    return 0;
}