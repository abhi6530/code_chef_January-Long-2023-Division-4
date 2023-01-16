#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int k;
	    cin>>k;
	    long long int arr[2*k];
	    for(int i=0;i<2*k;i++){
	        cin>>arr[i];
	    }
	    std::vector<long long int> dif1;
	    std::vector<long long int> dif2;
	    for(int i =0 ;i<2*k;i++){
	        if(arr[i]>k and i<k) dif1.push_back(i+1);
	        if(arr[i]<=k and i>=k) dif2.push_back(i+1);
	    }
	    sort(dif1.begin(),dif1.end());
	    sort(dif2.begin(),dif2.end());
	    long long int ans = 0;
	    k=dif1.size();
	    for(int i=0;i<k;i++)
	    ans +=abs(dif1[i]-dif2[i]);
	    cout<<ans<<"\n";

	}
	return 0;
}
