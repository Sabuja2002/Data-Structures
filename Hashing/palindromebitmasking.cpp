#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a--){
        int b;
        cin>>b;
        string s="";
        char t='a';
        for(int i=0;i<b;i++){
            if(t> 'z'){
                t='a';
            }
            s=s+t;
            t++;
        }
        cout<<s<<endl;
    }
    return 0;
}
