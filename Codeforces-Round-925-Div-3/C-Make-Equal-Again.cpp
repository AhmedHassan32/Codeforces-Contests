#include<bits/stdc++.h>
using namespace std;
#define Shingeki_no_Contest ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define ull unsigned long long
const ll mod = 1000000007, INF = 2e9;
int dx[] = { 0, 0, 1, -1, 1, -1, 1, -1 };
int dy[] = { 1, -1, 0, 0, -1, 1, 1, -1 };
// I think Controlling your mind is the most power thing in the world
ll gcd(ll a, ll b) {
    if (b == 0)return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
// Think twice, Code once
int main()
{
    Shingeki_no_Contest;
    // constrains -> multiple  , infinite loop->while(num > 0);
    // ll num=pow(2,i); instead of => ll(pow(2,i))
    // freopen("input.txt", "r", stdin);  //freopen("output.txt", "w", stdout);

    ll tests = 1; cin >> tests;
    while (tests--) {
        ll n; cin >> n;
        vector<ll>v(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> v[i];
        }
        ll num1 = v[1], num2 = v[n], idx1 = 1, idx2 = n, sol = n;
        for (ll i = 2; i <= n; i++) {
            if (v[i] == num1)idx1 = i;
            else break;
        }
        for (ll i = n - 1; i >= 1; i--) {
            if (v[i] == num2)idx2 = i;
            else break;
        }
        
        if (idx1 == n && idx2 == 1)cout << 0 << "\n";
        else {
            for (ll i = 1; i <= n; i++) {
                if (num1 == v[i] && num2 == v[i])sol = min(sol, (idx2 - idx1 - 1));
                else if (num1 == v[i])sol = min(sol, (n - idx1));
                else if (num2 == v[i])sol = min(sol, (idx2 - 1));
            }
            cout << sol << "\n";
        }
       
    }
    
    
    return 0;

}



