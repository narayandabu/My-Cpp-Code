#include <bits/stdc++.h>
using namespace std;
#define el '\n'
const int N=1e7+7; 
vector<bool> is_prime(N,true);
int __prime(){
    // Main Seive Algorithm. 
    // First Function to be called before anything.
    is_prime.at(0)=false;
    is_prime.at(1)=false;
    for(int i = 2; i < N; i++){
       if(is_prime.at(i)==true){
        for (int j = 2*i; j < N; j+=i){
           is_prime[j]=false;     
        }
       } 
    }
    return 1;
}
bool isprime(int n){
    // checks for is prime after __prime.
    return is_prime[n];
}
vector<int> primenos(int start,int end){
    //returns primenos after __prime.
    vector<int> primes;
    for (int i = start; i < end; i++){
        if(is_prime[i])primes.push_back(i);
    }
    return primes;    
}

