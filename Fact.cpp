#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<2){
        return 0;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
    
}

int isFact(int n){
    int ans=1;
    
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of m"<<endl;
    cin>>m;
    cout<<isPrime(n)<<endl;
    cout<<isFact(n)<<endl;
    cout<<isPrime(m)<<endl;
    cout<<isFact(m)<<endl;
    cout<<isPrime(m-n)<<endl;
    cout<<isFact(m-n)<<endl;
}

