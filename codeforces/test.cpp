#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[2][2] = {{1, 2}, {2, 3}};

    sort(a,a+2);
    for(int i=0;i<2;i++){
        cout<<a[i][0]<<a[i][1]<<endl;
    }
}