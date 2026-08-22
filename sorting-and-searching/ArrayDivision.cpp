// CSES Problem Set template
// Copy/rename this file when starting a new CSES problem.
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

void solve(const vector<int>& nums, int k) {

    // TODO: implement solution for a single problem instance
    // application of binary search on answer
    ll max_num = 0;
    ll total_sum = 0;
    for (int i=0; i<nums.size(); i++) {
        max_num = max(max_num, (ll) nums[i]);
        total_sum += nums[i];
    }

    // answer lies between max_num and total_sum
    // now find mid each iteration
    // we choose mid to capture calc of groups<=k
    ll lo = max_num;
    ll hi = total_sum;
    // max_num is lo, total_sum is hi

    while (lo < hi) {

        ll mid = lo + (hi-lo)/2;
        // ensure each group sum <= mid, count to match k
        int groups = 1;
        ll temp_sum = 0;
        for (int i=0; i<nums.size(); i++) {
            if (temp_sum + nums[i] > mid) {
                groups++;
                temp_sum = nums[i];
            } else {
                temp_sum += nums[i];
            }
        }

        if (groups <= k) {
            hi = mid;
        } else {
            lo = mid+1;
        }

    }

    cout << lo << "\n";
}

int main() {
    fast_io;
    int n, k;
    // For multi-test problems (rare on CSES), uncomment the next line:
    cin>> n>>k;
    vector<int> nums(n);

    for (int i=0; i<n; i++) {
        cin>>nums[i];
    }

    solve(nums, k);

    return 0;
