
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		long long dem=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			int temp = a[i] + x;
			int c;
			int temp2 = lower_bound(a,a+n,temp)-a;
			cout << temp2 << " ";
			c = temp2 - i-1;
			if(c>=1){
				dem+=c;
			}
		}
		cout << endl;
		cout<<dem<<endl;
	}
}
