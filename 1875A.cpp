#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int test;
    cin >> test;
    while(test--){
        long long int a,b,n; cin>>a>>b>>n;
        vector <long long int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int sum=b,i;
        for( i=0;i<n;i++){
            if(v[i]<a){
                sum+=v[i];
            }
            else{
                break;
            }
        }
        sum+=(n-1-i)*(a-1);
        cout<<sum<<endl;
    }
    return 0;
}


