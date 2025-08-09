#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int test;
    cin >> test;
    while(test--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        int flag=0;
        if(abs(a-b)>=6){
            for(int i=max(a,b);(i>=max(a,b))||(i<min(a,b));i++){
               if(i==c || i==d){flag++; }        
                if(i==12){i=0; }
            }
            if(flag==2 || flag==0){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}
        }
        else{
            for(int i=min(a,b);i<=max(a,b);i++){
                if(i==c || i==d){flag++;}
            }
            if(flag==2||flag==0){cout<<"NO"<<endl;}
            else{cout<<"YES"<<endl;}
        }
    }
    return 0;
}