                                            ///////////  ||       ||     ////////    ||   //
                                            //           ||       ||    ||           ||  //
                                            //           ||       ||    ||           || //
                                            /////        ||       ||    ||           ||//\
                                            //           \\       //    ||           ||/ \\
                                            //            \\     //     ||           ||   \\
                                            //             =======       \\\\\\\\    ||    \\

#include <bits/stdc++.h>
 
#define ll long long int
#define clr(a) memset(a, 0LL, sizeof(a))
#define fill(a) memset(a, -1LL, sizeof(a))
#define pb push_back
#define tc int t; cin>>t; while(t--)
#define deb(x) cout<<#x<<" : "<<x<<endl;
#define deb2(x, y) cout<<#x<<" : "<<x<<", "<<#y<<" : "<<y<<endl;
#define deb3(x, y, z) cout<<#x<<" : "<<x<<", "<<#y<<" : "<<y<<", "<<#z<<" : "<<z<<endl;
#define hello cout<<"hello"<<endl;
#define hello1 cout1<<"hello : 1"<<endl;
#define hello2 cout2<<"hello : 2"<<endl;
#define hello3 cout3<<"hello : 3"<<endl;
#define in ll n; cin>>n;
#define in2 ll n, m; cin>>n>>m;
#define out(a) cout<<a<<endl;
#define out2(a, b) cout<<a<<" "<<b<<endl;
#define sin string str; cin>>str;
#define sin2 string str1, str2; cin>>str1>>str2;
#define fast ios_base::sync_with_stdio(false);
#define file freopen("input.in", "r", stdin);
#define fin for(int i=0; i<n; i++)
#define fjn for(int j=0; j<n; j++)
#define sz 750005
#define szz 34
#define mod (1000000007LL)
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <ll> dp(sz+5, 0);
        vector <int> a;
        for(int i=0, x; i<n; i++){
            cin>>x; a.push_back(x);
        }

        ll ans = 0;
        sort(a.begin(), a.end());
        for(int x : a){
            dp[x] = (dp[x] + 1) % mod;
            ans = (ans + dp[x]) % mod;

            for(int j=2*x; j<=a[n-1]; j += x){
                dp[j] = (dp[j] + dp[x]) % mod;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}