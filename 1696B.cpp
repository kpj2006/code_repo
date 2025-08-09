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
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            if (a[0] == 0)
            {
                cout << 0 << endl;
                continue;
            }
            else
            {
                cout << 1 << endl;
                continue;
            }
        }
        
        
            for (int i = 0; i < n;)
            {
                if (a[i] != 0)
                { // jab non zero tabhi sum++
                    for (int j = i + 1; j < n; j++)
                    {
                        if (a[j] == 0)
                        {
                            sum++;
                            i += (j + 1);
                            break;
                        }
                        if (j == n - 1)
                        {
                            sum++;
                            i += (j + 1);
                        }
                    }
                }
                else
                {
                    i++;
                } /// agar zero hai toh i++
            }
            cout << sum << endl;
        }
    
    return 0;
}
