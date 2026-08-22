
// CSES Problem Set template
#include<iostream>
#include<vector>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

const ll INFLL = (1LL << 60);
const int INF = (int)1e9;
const int MOD = 1e9 + 7; // or 998244353 if needed

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

#ifdef LOCAL
#define debug(x) cerr << #x << " = " << (x) << '\n'
#else
#define debug(x) do {} while (0)
#endif

void solve(const vector<ll>& nums, int n) {

    // TODO: implement solution for a single problem instance
    // task is to find the missing number
    ll sum = 0; // we calc arr sum and subtract from n(n+1)/2

    for (int i=0; i<nums.size(); i++) {
        sum += nums[i];
    }

    ll natural = (ll)n * (n+1) / 2;

    ll result = natural-sum;

    cout<<result<<"\n";

}

int main() {
    fast_io;
    int n;
    // For multi-test problems (rare on CSES), uncomment the next line:
    cin>>n;
    vector<ll> nums(n-1);

    for (int i=0; i<n-1; i++) {
        cin>>nums[i];
    }

    solve(nums, n);

    return 0;
}

// 3 2 5 1 7
// 3 3 1 2 7
