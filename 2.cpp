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
	if(i==0) dp[i]=0;
	else{
		dp[i]=1e9;
		for(ll j=0;j<m;j++){
			if(a[j]<=i){
				dp[i]=min(dp[i-a[j]]+1,dp[i]);
			}
		}
		
	}
}
if(dp[target]==1e9) cout<<-1<<en;
else
cout<<dp[target]<<en; 

   return 0;
 }