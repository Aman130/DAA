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
        for (int i=1;i<n;i++)
        {
            int key=a[i];
            int j=i-1;
            while(j>=0 && a[j]>key)
            {
                comparison++;
                swaps++;
                a[j+1]=a[j];
                j=j-1;
            }
            //if(j==-1) comparison--;
            swaps++;
            a[j+1]=key;
        }
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
        cout<<"Comparison "<<comparison<<"\n"<<"Swaps "<<swaps<<"\n";
    }
    return 0;
}