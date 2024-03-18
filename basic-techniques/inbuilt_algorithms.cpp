#include <bits/stdc++.h>
using namespace std;
int main(){


    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    int n;cout<<"Enter n:  "<<endl;
    cin>>n;
    // vector must be ordered before using _bound else O(n)
    sort(v.begin(),v.end()); 

    // O(logn)
    auto i=lower_bound(v.begin(),v.end(),n); //that index address ..if not there then next greater element in whole array
    auto p=upper_bound(v.begin(),v.end(),n); //Next greater 

if(p==v.end() || i==v.end()){
  cout<<"_bound not there"<<endl;
}
    cout<<*i<<endl;
    cout<<*p<<endl;

set<int> s={12,11,31,3,23,3};
auto it=s.upper_bound(31); // O(logn) else upper_bound(s.begin(),s.end(),31) -- O(n)
// auto itx=m.upper_bound(31); bound function works only on keys in map.
if(it==s.end()){
cout<<"UPPER-BOUND"<<endl;
}
cout<<*it<<endl;


// IN case of vectors,sets,maps, functions  return iterator and in array returns pointer.
cout<<*min_element(s.begin(),s.end())<<endl;
cout<<*max_element(s.begin(),s.end())<<endl;
cout<<accumulate(s.begin(),s.end(),0)<<endl; //initial sum is zero.
cout<<count(s.begin(),s.end(),3)<<endl;
cout<<*find(s.begin(),s.end(),11)<<endl;
string s1="abajbsjkcbz";
reverse(s1.begin(),s1.end());
cout<<s1<<endl;



// #################   LAMBDA FUNCTION ##############

vector<int> v2={1,2,3,4,5};
cout<<any_of(v2.begin(),v.end(),[](int x){return x<0;})<<endl;
cout<<all_of(v2.begin(),v.end(),[](int x){return x<0;})<<endl;
cout<<none_of(v2.begin(),v.end(),[](int x){return x<0;})<<endl;







}