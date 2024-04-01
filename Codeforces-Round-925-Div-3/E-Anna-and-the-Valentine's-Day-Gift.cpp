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
        ll n, m; cin >> n >> m;
        vector<pair<ll, ll>>vp(n);
        for (ll i = 0; i < n; i++) {
            ll num; cin >> num;
            string s = to_string(num);
            ll cnt = 0, sz = s.size();
            for (ll j = sz - 1; j >= 0; j--) {
                if (s[j] == '0')++cnt;
                else break;
            }
            vp[i].first = cnt; 
            vp[i].second = sz - cnt;
        }
        sort(vp.begin(), vp.end());
        reverse(vp.begin(), vp.end());
        ll sol = 0;
        for (ll i = 0; i < n; i++) {
            if (i % 2 == 0)sol += vp[i].second;
            else sol += (vp[i].first + vp[i].second);
        }
        if (sol >= (m + 1))cout << "Sasha\n";
        else cout << "Anna\n";
    }
    
    
    return 0;

}



