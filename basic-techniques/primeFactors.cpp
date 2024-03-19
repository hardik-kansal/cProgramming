#include <bits/stdc++.h>
using namespace std;

// SUM AND Count of all divisors
void sum_count(int a){
    int sum=0;
    int count=0;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)sum+=i;count+=1;
        if(i*i!=a)sum+=a/i;count+=1;
    }
    cout<<sum<<' '<<count<<endl;
} // O(root(n))


// Prime factors
vector<int> prime_factors(int a){
    vector<int> v;
    for(int i=2;i*i<=a;i++){
        while(a%i==0){
            v.push_back(i);
            a=a/i;
        }
    }
    if(a>1){v.push_back(a);}
    return v;
}






int main(){
    sum_count(12);
    auto prime=prime_factors(12);
    for(auto &value:prime){cout<<value<<' ';}

// #########################################  SIEVE Algo --N(log(log(N)))
int N=10e7+5;
bool a[N];
vector<bool> l(N,0),h(N,0);
a[0]=a[1]=true;
for(int i=2;i<N;i++){
    l[i]=h[i]=i;
    if(a[i]==false){
        for(int j=2*i;j<N;j++){
            a[j]=true;
            h[j]=i;
            if(l[j]==0){l[j]=i;}
        }
    }
}

// prime factorization in O(logn) 
int num=10;
int count=0;
while(num){
    int f=h[num];
    while(num%f){
        count++;
        num/=f;
    }
}
cout<<count<<endl;

    
    

}