 #include<iostream>
#include<string.h>
 using namespace std;
 int main(){
  // // *******
  // // *******
  // // *******
  // // *******
  // for(int i=0; i<6 ; i++){
  //   for(int j=0 ; j<6 ; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }
  
  // // 12345
  // // 12345
  // // 12345
  // // 12345
  // for(int i = 0 ; i<5 ; i++){
  //   for(int j=0 ; j<5 ; j++){
  //     cout<<j;
  //   }
  //   cout<<endl;
  // }

  // 123
  // 456
  // 789
  // int k=1,j=0;
  // for(int i =0 ; i<3 ; i++){
  //   for(j=0;j<3;j++){
  //     cout<<k++<<" ";
  //   }
  //   cout<<endl;
  // }

  // *
  // **
  // ***
  // ****
  // *****
  // for(int i =0 ; i<5 ; i++){
  //   for(int j= 0 ; j<=i ; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // 1
  // 22
  // 333
  // 4444
  // for(int i =0 ; i<4; i++){
  //   for(int j=0 ; j<=i ; j++){
  //     cout<<i+1;
  //   }
  //   cout<<endl;
  // }

  // 1
  // 21
  // 321
  // 4321
  // for(int i=0;i<5 ; i++){
  //   int count = i+1;
  //   for(int j=0 ; j<=i;j++){
  //     cout<<count--;
  //   }
  //   cout<<endl;
  // }
  // for(int i=1; i<=5;i++){
  //   for(int j=1;j<=i; j++){
  //     cout<<i-j+1;
  //   }
  //   cout<<endl;
  // }

  // AAAAA
  // BBBBB
  // CCCCC
  // for(int i = 0 ; i<5 ; i++){
  //   char ch = 'A'+i;
  //   for(int j = 0 ; j<5 ;j++){
  //     cout<<ch;
  //   }
  //   cout<<endl;
  // }

  // ABC
  // ABC
  // ABC
  // for(int i=0 ; i<3 ;i++){
  //   char ch = 'A';
  //   for(int j=0; j<3; j++){
  //     cout<<ch++;
  //   }
  //   cout<<endl;
  // }
  // ABC
  // BCD
  // CDE

  // A
  // BB
  // CCC
  // for(int i=1 ; i<=3 ; i++){
  //   char ch = 'A'+i-1;
  //   for(int j =1 ;j<=i; j++){
  //     cout<<ch<<" ";
  //   }
  //   cout<<endl;
  // }

    //   *
    //  **
    // ***
  // for(int i =0; i<4; i++){
  //   int j=0;
  //   for(;j<4-i-1;j++){
  //     cout<<" ";
  //   }
  //   for(;j<4 ; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // ******
  // *****
  // ****
  // ***
  // **
  // *
  // for(int i= 0;i<5;i++){
  //   for(int j=0 ; j<5-i-1;j++){
  //     cout<<'*';
  //   }
  //   cout<<endl;
  // }

  // ******
  //  *****
  //   ****
  //    ***
  //     **
  //      *

  // for(int i=0;i<7; i++){
  //   int j;
  //   for(j=0;j<=i;j++){
  //     cout<<" ";
  //   }
  //   for(;j<7; j++){
  //     cout<<"*";
  //   }
  //   cout<<endl;
  // }

  // 11111
  //  2222
  //   333
  //    44
  //     5

  // for(int i=0; i<7; i++){
  //   int j;
  //   for( j=0;j<=i;j++){
  //     cout<<" ";
  //   }
  //   for(;j<7;j++){
  //     cout<<i+1;
  //   }
  //   cout<<endl;
  // }
  //     1
  //    22
  //   333
  //  4444
  for(int i=0; i<6;i++){
    int j;
    for(j=0;j<6-i-1; j++){
      cout<<" ";
    }
    for(;j<6;j++){
      cout<<i+1;
    }
    cout<<endl;
  }

    //       1
    //     2 3
    //   4 5 6
    // 7 8 9 10
    int count=1;
    for(int i=0;i<4;i++){
      int j;
      for( j=0;j<4-i-1;j++){
        cout<<" ";
      }
      for(;j<4; j++){
        cout<<count;
        count+=1;
      }
      cout<<endl;
    }

//     1
//   1 2 1
// 1 2 3 2 1
// int n=5;

//   for(int i=0 ; i<n ; i++){
//     int j=0;
//     for(; j<n-i-1;j++){
//       cout<<" ";
//     }
//     int count=1;
//     for(; j<n; j++){
//       cout<<count++;
//     }
//     // cout<<j<<" " ;
//     j=j-1;
//     count=i;
//     for(; j<n+i-1 ; j++){
//       cout<<count--;
//     }
//     cout<<endl;
//   }

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// for(int i=0;i<6;i++){
//   int j;
//   int count=1;
//   for(j=0;j<6-i;j++){
//     cout<<count++;
//   }
//   int k;
//   for(k=0;k<i*2;k++ ){
//     cout<<"*";
//   }
//   j=k;
//   count-=1;
//   for(j=0;j<6-i;j++){
//     cout<<count--;
//   }
//   cout<<endl;
// }

// ******
// ******
//   **
//   **
//   **
//   **
// ******
// ******
// for(int i=0;i<8;i++){
//   if(i==0 or i==1 or i==6 or i==7){
//   for(int j=0;j<6;j++){
//     cout<<"*";
//   }}
//   else{
//     for(int j=0;j<6;j++){
//       if(j==2 or j==3){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//   }
//   cout<<endl;
// }
//  char t;
//  string s= "";
//  while(cin>>t){
//     s += t;
//  }
//  cout<<s;
//  }