#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while (test--)
    {
        long long n, a ,b;
        cin >> n >> a >> b;
        vector<long long> arr(n-1);
        cout << a;
        