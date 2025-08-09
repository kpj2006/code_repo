#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int test;
    cin >> test;
    while (test--) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
           if (v[0] == 0 && v[1] == 0 && v[2] == 0) {
            cout << 0 << endl;
            continue;
        }
        sort(v.begin(), v.end());
        if((v[0]+v[1]+v[2])%2!=0){cout<<-1<<endl; continue;}
        cout << (v[0] + v[1] + v[2] - max(0, v[2] - v[0] - v[1])) / 2 << endl;
    }
    return 0;
}