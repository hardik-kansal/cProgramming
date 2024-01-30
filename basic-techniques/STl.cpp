#include <bits/stdc++.h>
using namespace std;
// COPY IS EXPENSIVE.
void printVec(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void isbalanced(string &s){
    unordered_map<char,int> u_map={{'[',1},{'{',2},{'(',3},{')',-3},{'}',-2},{']',-1}};
    stack<char> b;
    // why stack here -- bz we want first in bracket to be checked and first out.
    for(auto &ch:s){
        if(u_map[ch]>0){
            b.push(ch);
        }
        else{
            if(b.empty()){
                cout<<"NO"<<endl;
                return;
            }
            else{
                if(u_map[b.top()]+u_map[ch]!=0){
                    cout<<"NO"<<endl;
                    return;
                }
            }
            b.pop();
        }
    }
    if(b.empty()){cout<<"YES"<<endl;return;}
    cout<<"NO"<<endl;
}


int main(){

// ###################   VECTORS AND PAIRS #######################

    vector<pair<int,int>> v2={{1,2},{3,4}}; 
    vector<int> v(10,3);
    vector<int> &v1=v; 
    // COPY IS O(n).USE BY REFERENCING.
    printVec(v); // O(n)
    v1.pop_back();
    printVec(v);

// array of vectors- fixed rows, var cols

vector<pair<int,int>> :: iterator it;
for(it=v2.begin();it!=v2.end();++it){
    cout<<it->first<<" "<<it->second<<endl;
}
// it++ moves to next part in container.
// it+=1 moves to immediate next memory loc.


for(auto &value:v2){
    cout<<value.first<<" "<<value.second<<endl;
}
auto it1=v.begin();



// ###########################  MAPS #####################

// FOR MAPS- geeting and inserting costs O(logn)
// at each step, internally for map<string,string>, strings are compared;KEYS ARE COMPARED.
// => if size of string input >1e5 --costs O(slogn) as strings are internally stored as character arrays.

// Maps uses trees to store in sorted order by comparison.
// Unordered_maps uses HASHTABLES to store and fetch in O(1) but UNSORTED.

map<int,string> a;
a.insert({1,"abc"});
for(auto &value:a){
    cout<<value.first<<" "<<value.second<<endl;
}
auto it2=a.find(1);
// if 1 does not exist return a.end()
if(it2!=a.end()){
    a.erase(it2);
    // a.erase(1);
}
a[1]="abc";
a[5]="def";
a[2]="asd";
for(auto &value:a){
    cout<<value.first<<" "<<value.second<<endl;
    // Get printed in sorted order of keys
}
a.clear();
// removes map

// unordered_map<pair<int,int>,string> umap;
// Not allowed as there is no predtermined hash function for vectors,sets,pairs.


// #####################   SETS  #######################

set<string> set1; 
set<int> set2={1,2,3};
// Stores UNIQUE elements in sorted order => O(logn)
// maps without values.

set1.insert("z");
set1.insert("abc");
for(auto &value:set1){
    cout<<value<<endl;
}
set1.insert("z");
auto itx=set1.find("z");
if(itx!=set1.end()){
set1.erase(itx);
}
// unordered_set<int> s;
// to just check unique presence.uses hashtables => O(1) => cant use complex datatypes.


// ################## MUTLISETS ###############

multiset<string> ms;
// stores in sorted order +.O(logn)
// allows duplicates

ms.insert("abc");
ms.insert("abc");
ms.insert("z");
for(auto &value:ms){
    cout<<value<<endl;
}
// Two ways to delete "abc"
// Either first occurence  
auto ita=ms.find("abc");
if(ita!=ms.end()){
    ms.erase(ita);
}
// or every.
ms.erase("abc"); // searches for every address of "abc" internally
string b="({[]})";
isbalanced(b);
}