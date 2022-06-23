// TODO: Check prime number in range[1:n] using sieve of eratosthenes algorithms
// Algorithm: We start from 2, and on each encounter of a 
// prime number, we mark its multiples as composite.
// Time Complexity: O(n log log n)
// Space Complexity: O(n)
#include<iostream>
using namespace std;
void sieve(int n){
    int arr[n+1] = {0}; // initializing an array of size n+1(cause of indexing)
    // the above array contains all elements 0 (false) in which we can convert into 1 on nonprime numbers
    for(int i = 2;i*i<=n;i++){ // (i*i because we dont need to iterate whole array, sqrt of n is enough)
        // we intitialized the itarator from 2 because 1 is not a prime number 
        if(arr[i]==0){
            // when there is a 0(means prime number it will check is that a prime or not by checking its multiples)
            for(int j=i*i;j<=n;j+=i){
                arr[j] = 1; // where i has multiples we will mark that as 1(non prime)
            }
        }
    }
    // Now we have an array (0==prime) and (1== Not prime)
    for(int i=2;i<=n;i++){
        // Printing all prime numbers
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
    // calling the function
    sieve(12);
}