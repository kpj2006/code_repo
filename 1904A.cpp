        #include<iostream>
        using namespace std;
        int main() {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            int test;
            cin >> test;
            while (test--){
                int x,y; cin>>x>>y;
                int x_k,y_k; cin>>x_k>>y_k;
                int x_q,y_q; cin>>x_q>>y_q;
                





            }



            void check(int *sum,int x,int y,int x_k,int y_k,int x_q,int y_q){
                if(abs(x_k-x)==&&y_k==y_q){
                    cout<<0<<endl;
                    return;
                }
                if(x_k==x_q||y_k==y_q){
                    cout<<1<<endl;
                    return;
                }
                if(abs(x_k-x_q)==abs(y_k-y_q)){
                    cout<<1<<endl;
                    return;
                }
                cout<<2<<endl;
            }