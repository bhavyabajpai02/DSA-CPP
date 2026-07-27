#include<iostream>
#include<queue>
using namespace std;
int solve(int *arr,int n ,int k){
  deque<int> maxi;
  deque<int> mini;
  for(int i = 0 ; i<k ; i++){
    while(!maxi.empty() and arr[maxi.back()]<= arr[i]){
      maxi.pop_back();
    }
    while(!mini.empty()  and arr[mini.back()]>= arr[i]){
      mini.pop_back();
    }
    maxi.push_back(i);
    mini.push_back(i);
  }
  // cout<<maxi.front()<<" "<<mini.front()<<endl;
  int ans =0;
  for(int i = k ;i<n; i++){
    int max = maxi.front(), min = mini.front();
    ans+= arr[max]+arr[min];
    // removing out of range values
    while(!maxi.empty() and i-maxi.front() >= k){
      maxi.pop_front();
    }
    while(!mini.empty() and i-mini.front() >= k){
      mini.pop_front();
    }

    // Adding new values
    while(!maxi.empty() and arr[maxi.back()]<= arr[i]){
      maxi.pop_back();
    }
    while(!mini.empty()  and arr[mini.back()]>= arr[i]){
      mini.pop_back();
    }
    maxi.push_back(i);
    mini.push_back(i);

  }
  ans += arr[maxi.front()]+arr[mini.front()];
  return ans;
}
int main(){
  int arr[7] = {2,5,-1,7,-3,-1,-2};
  // int k = 4;
  cout<<solve(arr,7,4)<<endl;
}