#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    while (test--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long sum_min = (k * (k + 1)) / 2;
        long long sum_max = (k * (2 * n - k + 1)) / 2;

        cout << ((sum_min <= x && sum_max >= x) ? "YES" : "NO") << endl;
    }

    return 0;
}
