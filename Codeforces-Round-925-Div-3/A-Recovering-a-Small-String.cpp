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
        string sol;
        if (n >= 28)sol += 'z', n -= 26;
        else sol += char('a' + (n - 3)), n -= (n - 2);
        if (n >= 27)sol += 'z', n -= 26;
        else sol += char('a' + (n - 2)), n -= (n - 1);
        sol += char('a' + (n - 1));
        reverse(sol.begin(), sol.end());
        cout << sol << "\n";
    }
    
    
    return 0;

}



