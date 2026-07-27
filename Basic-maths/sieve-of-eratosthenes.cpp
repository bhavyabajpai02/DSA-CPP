#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> soe(int n) {
        if (n <= 2) return {};

        vector<bool> isPrime(n,true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        vector<int>res;
        for(int i= 0 ; i<n; i++){
          if(isPrime[i])
          res.push_back(i);
        }
        return res;
    }
};
int main(){
  int n = 10;
  Solution sol;
  vector<int> allPrime = sol.soe(n);
  for(auto i : allPrime){
    cout<<i<<" ";
  }
  cout<<endl;
}
