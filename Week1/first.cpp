#include <bits/stdc++.h>

using namespace std;

int linearSearch(int a[],int n,int k)
{
    int comparison = 0;
    for (int i=0;i<n;i++)
    {
        ++comparison;
        if (a[i] == k)
        {
            cout<<"Present "<<comparison<<"\n";
            return 1;
        }
    }
    cout<<"Not Present "<<comparison<<"\n";
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        linearSearch(arr, n, key);
    }
    return 0;
}