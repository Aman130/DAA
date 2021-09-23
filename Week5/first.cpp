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
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int fre[26];
		for(int i=0;i<26;i++) fre[i]=0;
        for(int i=0;i<n;i++){
            ++fre[(int)(a[i])-'a'];
        }
        int max1=INT_MIN;
        char c;
        for(int i=0;i<n;i++){
            if(max1<fre[a[i]-'a']){
                max1=fre[a[i]-'a'];
                c=a[i];
            }
        }
		if(max1>1) cout<<c<<"-" <<max1<<endl;
		else cout << "No Duplicate Present" << endl;
        
    }
    return 0;
}