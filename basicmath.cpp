#include<bits/stdc++.h>
using namespace std;

// int countdigit(int n){
//     int count =  0;
//     while(n>0){
//         count+=1;
//         n=n/10;
//     }
//     return count;
// }
// int reversenum(int n ){
//     int revnum=0;
//       while(n>0){
//       int  ld=n%10;
//       revnum = (ld+(10*revnum));
//       n = n/10;
//       }
//        return revnum;
//       }
    
// int checkpalindrome(int n ){
//       int org = n;
//       int pan = 0;
//       while(n>0){
//         int ld = n%10;
//         pan = ((10*pan)+ld);
//         n= n/10;
//       }
//       if ( org == pan){
//         cout<<"true";}
//         else cout<<false;
       
// }



// int main(){
//     int n;
//     cin>>n;
//     cout<<checkpalindrome(n);

// return 0;
// }


// int main(){
//   int n;
//   cin>>n;
//   int dup =n;
//   int  sum=0;
//   while(n>0){
//       int ld = n%10;
//       sum = sum+(ld*ld*ld);
//       n= n/10;

//   }
//   if(dup==sum)
//   cout<<"armstrong";
//   else cout<<"no armstr";

//   return 0;
// }

int main(){
    
  int n ;
  cin>>n;
  for(int i =1; i<=sqrt(n);i++){
    if( n%i==0){
      cout<<i;
    }
  }
}