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

void solve(const vector<ll>& nums) {

    // TODO: implement solution for a single problem instance
    // iterate through the array, 3 2 5 1 7
    // take the temp max element in transit and check the next and so on

    if (nums.size()==0 || nums.size()==1) {
        cout<<"0"<<"\n";
        return;
    }

    ll temp_max = nums[0];
    ll moves = 0;
    // initially ofcourse no moves needed

    for (ll i=0; i<nums.size(); i++) {
        if (temp_max>nums[i]) {
            moves += (temp_max-nums[i]);
        } else {
            temp_max = nums[i];
        }
    }

    cout<<moves<<"\n";
}

int main() {
    fast_io;
    int n;
    // For multi-test problems (rare on CSES), uncomment the next line:
    cin>> n;
    vector<ll> nums(n);

    for (int i=0; i<n; i++) {
        cin>>nums[i];
    }

    solve(nums);

    return 0;
}

// 3 2 5 1 7
// 3 3 1 2 7
