#include<iostream>
#include<array>
using namespace std;
int sqrt(int n){
  int s = 0,e = n,ans=-1;
  while(s<=e){
    long long mid = s + (e-s)/2;
    if(mid*mid == n){
      return mid;
    }
    else if(mid*mid>n){
      e = mid-1;
    }
    else{
      s = mid + 1;
      ans = mid;
    }
  }
  return ans;
}
double morePrecision(int n , int precision, int tempSol){
  double  factor= 1;
  double ans = tempSol;
  for(int i=0 ;i<precision ; i++){
    factor= factor/10;
    for(double j = ans; j*j<=n ; j=j+factor){
      ans = j;
    }
  }
  return ans;
}
int main(){
  int n;
  cout<<"Enter the num : ";
  cin>>n;
  int tempSol = sqrt(n);
  int prec;
  cin>>prec;

  cout<<"Sqrt("<<n<<") is without precision this : "<<tempSol<<endl;
  cout<<"Sqrt("<<n<<") is with precision this : "<<morePrecision(n,prec,tempSol);
}