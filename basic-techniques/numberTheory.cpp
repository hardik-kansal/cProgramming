#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){
    // 1<<n = pow(2,n)
    cout<<(1<<4)<<endl;
    cout<<(2>>1)<<endl;
    cout<<UINT32_MAX<<endl;
    cout<<(1ll<<32)-1<<endl;
    // set-1 unset-0
    // (1<<i) => 1 only at ith index
    // (1<<i)-1 => i no of ones
    // 
    printBinary(9);
    printBinary(1<<3);
    int a=15;
    int i=2;
    // TO check bit set or unset
    if((a&(1<<i)!=0)) cout<<"SET\n" ;else cout<<"UnSET\n"; 
    // TO set bit
    printBinary(a| 1<<i);
    // TO unset bit
    printBinary(a&~(1<<i));
    // Toggle bit
    printBinary(a^(a<<i));
    // count set bits
        int cc=0;
    for(int i=0;i<=31;i++){
        if((a&(1<<i))!=0){
            cc++;
        }

    }
    cout<<cc<<endl;
    cout<<__builtin_popcountll(1ll)<<endl;

    if(a&1)cout<<"ODD\n";else cout<<"EVEN\n";

    // Multiply and divide
    cout<<(a>>1)<<endl; //divide
    cout<<(a<<1)<<endl; //multiply

    // Uppercase <-> Lowercase
    for(char c='A';c<='E';c++){ //unset
        cout<<c<<endl;
        printBinary(int(c));
    }
    for(char c='a';c<='e';c++){
        cout<<c<<endl;
        printBinary(int(c));
    }
    // Differnce is of 5th bit
    cout<< char('A' | (1<<5))<<endl;
    printBinary(' '); // (1<<5) character
    cout<<char('A'| ' ')<<endl;
    cout<<char('a'&~(1<<5))<<endl;
    cout<<char('a'& '_')<<endl; // '_' binary is not ~(1<<5) but works!

    cout<<char('A'| ' ')<<endl; // u->l
    cout<<char('a'& '_')<<endl; // l->u
    
    if(a&(a-1)==0)cout<<"POWER OF 2\n";else cout<<"NOT POWER OF 2"<<endl;

    // To unset till ith index

    printBinary(a&~((1<<(i+1))-1));



    
}