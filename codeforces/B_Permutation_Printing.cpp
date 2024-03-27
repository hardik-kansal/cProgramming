
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int i=1,j=n;
        while(i<j){
            cout<<i<<" "<<j<<" ";
            i++;
            j--;
        }
        if(i==j) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
