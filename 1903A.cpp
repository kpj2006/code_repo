        #include<iostream>
        #include<vector>
        #include<algorithm>
        using namespace std;
        int main() {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int test;
            cin >> test;
            while (test--){
                int x,y; cin>>x>>y;
                vector<int> arr(x),brr(x);
                int flag=0;
                for(int i=0;i<x;i++){
                    cin>>arr[i];
                    arr[i]=brr[i];
                    if(i>0&&arr[i]==arr[i-1]) {flag++;}
                }
                sort(arr.begin(),arr.end());
                for(int i=0;i<x;i++){
                    if(arr[i]!=brr[i]) { break;}
                    if(i==x-1) {COUT<<"YES"<<endl; return 0;}
                }
                if(y==1&&flag!=x-1) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            return 0;
        }