#include<bits/stdc++.h>
#define ll long long
#define en "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
using namespace std;

ll dp[100002000];
const ll mod=1e9+7;

signed main(){
 ios_base::sync_with_stdio(false);
cin.tie(NULL);

ll m;cin>>m;
ll target;cin>>target;
int a[m];f(i,0,m) cin>>a[i];
for(ll i=0;i<=target;i++){
	if(i==0) dp[i]=1;
	else{
		dp[i]=0;
		for(ll j=0;j<m;j++){
			if(a[j]<=i){
				dp[i]+=dp[i-a[j]];
			}
		}
		dp[i]%=mod;
		
	}
}

cout<<dp[target]<<en; 

   return 0;
 }