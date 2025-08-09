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
        long long n, m;
        cin >> n >> m;
                if (n == 1 && m == 1)
            cout << 0 << endl; // Only one cell → no need to ask
        else if (n == 1 || m == 1)
            cout << 1 << endl; // 1D grid → one query is enough
        else
            cout << 2 << endl; // 2D grid → need two queries
        
    }
    return 0;       
}