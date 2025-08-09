        #include<iostream>
        #include<string>
        using namespace std;
        int main() {
            ios_base::sync_with_stdio(false);
            cin.tie(NULL);
            string str,btr; cin>>str;
            str=btr;
            (str[0]>=97)? str[0]-=32:str[0]+=32;
            for(int i=0;i<str.size();i++){
               if(str[i]>=97) {cout<<btr; break;}
               else{
                str[i]+=32;
               }
            }
            cout<<str;
            return 0;
        }