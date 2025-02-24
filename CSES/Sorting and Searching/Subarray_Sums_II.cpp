#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
#define FIN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x) cerr<<#x<<" = "<<(x)<<endl;
#define raya cerr << "=================" << endl;
#define forn(i,n) for(int i=0;i<int(n);i++)
#define pb push_back
#define mp make_pair
#define endl "\n";
 
int main(){
    FIN;    
 
    int n,x; cin >> n >> x; 
    vector<int>arr(n); 
    forn(i,n) cin >> arr[i];
 
    map<ll,ll>prefix_sums;
    prefix_sums[0] = 1;
    ll ans = 0; 
    ll prefix = 0;
 
    for(int i=0; i<n; i++){
        prefix += arr[i];
        ans += prefix_sums[prefix-x];
        prefix_sums[prefix]++;
    }
 
    cout << ans << endl;
    return 0;
}