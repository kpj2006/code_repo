        #include<iostream>
        #include<unordered_map>
        #include<vector>
        using namespace std;
        int main() {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int test;
            cin >> test;
            while (test--){
                int x, y; cin>>x>>y;
                vector<char> arr(x);
                unordered_map<char, int> freq;
                for(int i=0;i<x;i++){
                        cin>>arr[i];
                }
                for (char num : arr) {
                     freq[num]++;
                }
                int sum=0;
                for (const auto& pair : freq) {
                     if(pair.second%2!=0) sum++;
                }
                if((sum-y)<0) {cout <<"YES"<<endl; continue;}
                ((sum-y)!=0&&(sum-y)!=1)? cout<<"NO"<<endl:cout<<"YES"<<endl;
            }
            return 0;
        }
        