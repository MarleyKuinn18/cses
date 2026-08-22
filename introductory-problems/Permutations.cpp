// CSES Problem Set template
// Copy/rename this file when starting a new CSES problem.
#include<iostream>
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

void solve(int input) {

    // TODO: implement solution for a single problem instance
    // read input using cin, write output using cout
    if (input == 2 || input == 3) {
        cout << "NO SOLUTION" << "\n";
        return;
    }
    if (input == 1) {
        cout << 1 << "\n";
        return;
    }

    int i; int j;

    // beautiful perm is even nos then odd

    i = input-1;
    j = input;


    while (i>0) {
        cout<< i << " ";
        i -= 2;
    }
    while (j>0) {
        cout<< j << " ";
        j -= 2;
    }


}

int main() {
    fast_io;
    int input;
    // For multi-test problems (rare on CSES), uncomment the next line:
    // cin >> T;
    cin>> input;
    solve(input);

    return 0;
}