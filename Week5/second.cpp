#include <bits/stdc++.h>
using namespace std;
char freq[26];
void solve(int arr[],int n,int key){
	int left=0;
	int right=n-1;
	int flag=0;
	while(left<right){
		if(arr[left]+arr[right]==key){
			cout << arr[left] << " " << arr[right] << ", ";
			right--;
			flag++;
		}
		else if(arr[left]+arr[right]>key){
			right--;
		}
		else if(arr[left]+arr[right]<key){
			left++;
		}
	}
	if(flag==0) cout << "No Such Pair Exist\n";
	else cout << endl;
}
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
		for(int i=0;i<n;i++) cin>>a[i];
		int k;
		cin>>k;
		sort(a,a+n);
	 	solve(a,n,k);
    }
    return 0;
}