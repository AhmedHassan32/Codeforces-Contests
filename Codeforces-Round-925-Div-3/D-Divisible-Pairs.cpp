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
        ll n, x, y; cin >> n >> x >> y;
        map<ll, vector<ll>>mpv;
        for (ll i = 0; i < n; i++) {
            ll num; cin >> num;
            ll num2 = num % y; 
            mpv[num2].push_back(num);
        }

        ll sol1 = 0, sol2 = 0;
     
        for (auto m : mpv) {
            vector<ll>v = m.second;
            map<ll, ll>mp;
          
            for (ll i = 0; i < v.size(); i++) {
                mp[(v[i] % x)]++;
            }
          
            for (auto& mm : mp) {
                if (mm.first == 0 || (mm.first * 2) == x) {
                    ll cnt1 = mm.second; cnt1--;
                    cnt1 *= (cnt1 + 1); cnt1 /= 2;
                    sol1 += cnt1;
                }
                else {
                    ll cnt2 = mp[(x - mm.first)];
                    sol2 += (mm.second * cnt2);
                }
            }
            
        }
        ll sol = sol1 + (sol2 / 2);
        cout << sol << "\n";

    }
    
    
    return 0;

}



