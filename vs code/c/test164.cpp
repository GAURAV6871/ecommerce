#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007


void solve(){

ll n, k;
cin>>n>>k;

ll arr[n];

for(int i =0; i<n; i++){
    cin>>arr[i];
}

ll maxans = LLONG_MIN;

for(int i = 1; i<n; i++){
    ll ans = 0;
    for(int j = 2;j<=n ; j++){
        
        if(i==j)
         continue;
         
        ans= i*j-k*(arr[i-1]|arr[j-1]);
         if(maxans<ans)
          maxans = ans;
    } 
  
}



cout<<maxans<<endl;

}   
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}
