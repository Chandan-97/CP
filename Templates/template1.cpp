                                            ///////////  ||       ||     ////////    ||   //
                                            //           ||       ||    ||           ||  //
                                            //           ||       ||    ||           || //
                                            /////        ||       ||    ||           ||//\
                                            //           \\       //    ||           ||/ \\
                                            //            \\     //     ||           ||   \\
                                            //             =======       \\\\\\\\    ||    \\
/*************************************************** FUCK YOUR FEELINGS ****************************************************/
 
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
#define sz 100005
#define szz 34
#define mod (1000000007LL)
using namespace std;
 
ll reverse(ll _n){
    ll res = 0LL;
    while(_n){
        res = res * 10LL + _n % 10LL;
        _n /= 10LL;
    }
 
    return res;
}
 
vector <ll> seive(ll n=10000000LL){
    bool a[n+1];
    fill(a);
    a[0] = a[1] = false;
    for(ll i=2; i*i <= n; i++){
        if(a[i] == true){
            for(ll j=i*2; j<=n; j+=i){
                a[j] = false;
            }
        }
    }
 
    vector <ll> res;
    for(int i=2; i<=n; i++){
        if(a[i]){
            res.push_back(i);
        }
    }
    return res;
}
 
int lower(string str){
    int cnt = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            continue;
        cnt++;
    }
    return cnt;
}
 
int upper(string str){
    int cnt = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            continue;
        cnt++;
    }
    return cnt;
}
 
string toLower(string str){
    string res = str;
    for(int i=0; i<res.length(); i++){
        if(res[i] >= 'A' && res[i] <= 'Z')
            res[i] = res[i] + ('a' - 'A');
    }
    return res;
}
 
string toUpper(string str){
    string res = str;
    for(int i=0; i<res.length(); i++){
        if(res[i] >= 'a' && res[i] <= 'z')
            res[i] = res[i] - ('a' - 'A');
    }
    return res;
}
 
bool cmp(int &x, int &y){
    return x < y;
}
 
ll power(ll x, ll y, ll p)
{
    if(y == 0LL){
        return x % p;
    }
    ll res = 1LL;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
    // equal to p
 
    while (y > 0LL)
    {
        // If y is odd, multiply x with result
        if (y & 1LL)
            res = (res*x) % p;
 
        // y must be even now
        y = y/2LL; // y = y/2
        x = (x*x) % p;
    }
    return res % p;
}
 
bool isprime(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x % i == 0)
            return false;
    }
    return true;
}
 
bool isType1(string str){
    for(int i=0; i<str.length();i++){
        if(str[i] >= 'a' && str[i] <= 'z')
            continue;
        return false;
    }
    return true;
}
 
vector <int> __ans;
 
bool isType2(string str){
 
    bool num = true;
    for(int i=0; i<str.length(); i++){
        if(num){
            if(str[i] >= '0' && str[i] <= '9'){
                int val = 0;
                val = str[i] - '0';
                for(int j=i+1; j<str.length(); j++){
                    if(str[j] >= '0' && str[j] <= '9'){
                        val = val * 10 + str[j] - '0';
                        i = j;
                    }
                    else{
                        break;
                    }
                    if(j==str.length() -1)
                        return false;
                }
                __ans.pb(val);
                num = false;
            }
            else
                return false;
        }
        else{
            if(str[i] >= 'a' && str[i] <= 'z'){
                __ans.pb(str[i]);
                num = true;
            }
            else{
                return false;
            }
        }
    }
 
    if(num == false)
        return false;
    if(__ans.size() % 2)
        return false;
 
    return true;
}
 
void convertTo2(string str){
    int idx = 0;
    while(true){
        if(idx >= str.length())
            break;
 
        char ch = str[idx];
        int cnt = 0;
 
        for(int j=idx; j<str.length(); j++){
            if(str[j] == ch){
                cnt++;
                idx = j;
                continue;
            }
            break;
        }
 
        cout<<cnt<<ch;
 
        idx++;
    }
    cout<<endl;
}
 
void convertTo1(string str){
    for(int i=0; i<__ans.size() ; i+=2){
        if(i%2==0){
            int num = __ans[i];
            char ch = __ans[i+1];
            for(int j=0; j<num; j++){
                cout<<ch;
            }
        }
    }
    cout<<endl;
}
 
ll ss(string str){
    ll ans = 0, cnt = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == 's')
            cnt++;
        else
            ans += cnt;
    return ans;
}
 
bool cmpp(string a, string b){
    return (ss(a+b) > ss(b+a));
}
 
int n;
vector <int> g[sz];
vector <int> w;
vector <int> blacklist;
 
 
void query1(int node, int val){
    queue <int> q;
    q.push(node);
    while(!q.empty()){
        int top = q.front();
        q.pop();
        if(blacklist[top] == 0) w[top] += val;
 
        for(int child : g[top]){
            if(blacklist[child] == 1) continue;
            q.push(child);
        }
    }
}
 
void query2(int node, int val){
    if(blacklist[node] == 1) return;
    w[node] += val;
}
 
void query3(int node){
    if(blacklist[node] == 1) blacklist[node] = 0;
    else if(blacklist[node] == 0) blacklist[node] = 1;
}
 
int query4(int node){
    return w[node];
}
 
 
 
int main(){
    fast;
    w.resize(sz);
    blacklist.resize(sz);
    for(int i=0; i<sz; i++) w[i] = 0, blacklist[i] = 0;
    cin>>n;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    for(int i=1; i<=n; i++) cin>>w[i];
 
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        // cout<<"query type : "<<type<<endl;
        if(type == 1){
            int a, b;
            cin>>a>>b;
            query1(a, b);
        }
        if(type == 2){
            int a, b;
            cin>>a>>b;
            query2(a, b);
        }
        if(type == 3){
            int a;
            cin>>a;
            query3(a);
        }
        if(type == 4){
            int a;
            cin>>a;
            cout<<query4(a)<<endl;
        }
    }
 
 
    
    
    return 0;
}