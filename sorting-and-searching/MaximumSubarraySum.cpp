
// CSES Problem Set template
#include<iostream>
#include<vector>
#include<cstdint>
#include<chrono>
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

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};


void solve(const vector<ll>& nums) {

    if (nums.size()==0) {
        cout<<"0"<<"\n";
        return;
    }

    if (nums.size()==1) {
        cout<<nums[0]<<"\n";
        return;
    }

    // solving max subarray sum now
    ll global_best = nums[0];
    ll best_so_far = nums[0];

    for (ll i=1; i<nums.size(); i++) {
        best_so_far = max((ll)(best_so_far+nums[i]), nums[i]);
        global_best = max(global_best, best_so_far);
    }

    cout<<global_best<<"\n";

}

int main() {
    fast_io;
    ll n;
    cin>>n;
    vector<ll> nums(n);

    for (ll i=0; i<n; i++) {
        cin>>nums[i];
    }

    solve(nums);

    return 0;
}
