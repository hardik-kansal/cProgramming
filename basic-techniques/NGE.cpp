#include <bits/stdc++.h>
using namespace std;


// print next greater element in a vector for each element...If none print -1 

vector<int> nge(vector<int> &v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]>st.top()){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
        }
        while(!st.empty()){
            nge[st.top()]=-1;
            st.pop();
        }
    return nge;
    }


// NEXT greater element means the first number greater than indexed number in right of it.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int> v1=nge(v);
        for(int i=0;i<v1.size();i++){
            cout<<v[i]<<" "<<((v1[i]==-1)?-1:v[v1[i]])<<endl;

        }

    }




}