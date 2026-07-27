#include<bits/stdc++.h>
using namespace std;
int main(){
      int cash = 1330,hun = 0,twenty=0, fifty =0 , one = 0;
      while(cash >0 ){
        int call;
        if(cash / 100 > 0){
          call = 100;
        }
        else if(cash/50 >0){call = 50;}
        else if(cash/20 >0 ) call= 20;
        else call = 1;
        switch(call ){
        case 100: 
        cash =cash-100*(cash/100);
        hun++;
        break;
        case 50:
        cash =cash-50*(cash/50);
        fifty++;
        break;
        case 20:
        cash =cash-20*(cash/20);
        twenty++;
        break;
        case 1:
        cash =cash-1;
        one++;
        break;
      }
  }
  cout<<"hun: "<<hun<<" "<<" fifty: "<< fifty << " twenty: "<<twenty<<" one: "<< one<< endl;
}