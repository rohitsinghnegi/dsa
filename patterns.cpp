#include<bits/stdc++.h>
using namespace std;

void print1(int n){
   for(int i=0;i<n;i++)
   {

    for(int j=0;j<n;j++)
   {
    cout<<" * ";
   }
    cout<<endl;
}
   }
void print2(int n ) {
    for(int i=1;i<=n;i++)
    {
        for( int j=1;j<=i;j++)
        {
            cout<<" * ";
    }
    cout<<endl;
}
}
void print3(int n ){
    for(int i=1;i<=n;i++)
    {
            for (int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout<<i;
        }
        cout<<endl;

    }
}
void print5(int n ){
    for(int i =1;i<=n;i++){
        for(int j =1 ;j<=n-i+1;j++ ){
            cout<<"*";

        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print7(int n){
     for(int i=1;i<=n;i++){
        //space
        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        //star
             for(int j=1;j<=2*i-1;j++){
                cout<<"*";
             }
        //space
        for(int j = 1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
     }
}
void print8(int n){
    for (int i=1;i<=n;i++){
      //space
      for(int j=1;j<=i;j++){
        cout<<" ";
      }
      //star
           for(int j=1;j<=2*(n-i)+1;j++){
            cout<<"*";
           }
      //space
      for(int j=1;j<=i;j++){
        cout<<" ";
      }
      cout<<endl;
    }
}
void print9(int n ){
    for(int i=1;i<=n;i++){
        //space
        for(int j =1;j<=n-i;j++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j =1;j<=n-i;j++){
            cout<<" ";
    }
    cout<<endl;
}
    for(int i=1;i<=n;i++){
         //space
         for (int j=1;j<=i-1;j++){
            cout<<" ";
         }
         //star
         for(int j =1;j<=2*(n-i)+1;j++){
            cout<<"*";
         }
         //space
         for (int j=1;j<=i-1;j++){
            cout<<" ";
         }
         cout<<endl;
     }
     
}
void print10(int n ){
    for(int i=1;i<=2*n-1;i++)
    {
        int stars=i;
        if (i > n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n ){
    int start = 1;
     for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<start;
            start=!start;
        }  
        cout<<endl;  
     }
}
void print12(int n ){
    for(int i=1;i<=n;i++){
        //number
       for(int j=1;j<=i;j++){
          cout<<j;
       }
       for(int j=1;j<=n-i;j++){
        cout<<"_";
       }
       //space
       for(int j=1;j<=n-i;j++){
        cout<<"_";
       }
       //number
       for(int j=i;j>=1;j-- ){
        cout<<j;
       }
       cout<<endl;

    }
}
void print13(int n ){
    int number =1;
    for(int i=1;i<=n;i++){

        for(int j =1;j<=i;j++){
            cout<<" "<<number<<" ";
            number += 1;
        }
        cout<<endl;
    }
}
void print14(int n ){
    for (int i =0;i<n;i++){
        for( char ch = 'A' ; ch<='A'+i; ch++ ){
            cout<<ch;
        }
        cout<<endl;
    }
}
void print15(int n ){
  for (int i  = 0;i<n;i++){
    for(char ch = 'A';ch<'A'+(n-i);ch ++)
    {
        cout<<ch;

    }
    cout<<endl;
  }
}
void print16(int n ){
      
    for(int i =0;i<=n;i++){
        char ch ='A'+i;
        for ( int j=0; j<=i;j++){
            cout <<ch;
        }
        cout<<endl;
    }
}
void print17(int n ){
       for(int i =0;i<n;i++){
        //space
        for(int j = 1;j<=n-1-i;j++){
            cout<<" ";
        }
        //char
        char ch = 'A';
         int  start = 2*i+1;
           int breakpoint = (2*i+1)/2;
            for( int j=1;j<=start;j++){
                cout<<ch;
               if(j<=breakpoint ) ch++;
               else ch--;
            }

        //space
        for(int j = 1;j<=n-1-i;j++){
            cout<<" ";
        }
             cout<<endl;
       }
    }
void print18(int n ){
    for(int i=1;i<=n;i++){
         char ch = 'A'+n-i;
         for( int j=1;j<=i;j++){
            cout<<ch;
            ch++;
         }
         cout<<endl;
    }
}
void print19(int n ){
    
    for (int i = 0;i<n;i++){
        
        //star
         for(int j=1;j<=n-i;j++){
            cout<<"*";
         }
        //space
        for(int j=1;j<=2*i;j++){
            cout<<" ";
        }
        //star
         for(int j=1;j<=n-i;j++){
            cout<<"*";
            
             }
             cout<<endl;
         
          
}
    int inssp=n*2-2;
    for (int i = 0;i<n;i++){
        
        //star
         for(int j=1;j<=i+1;j++){
            cout<<"*";
         }
        //space
        for(int j=1;j<=inssp;j++){
            cout<<" ";  
        }
        //star
         for(int j=1;j<=i+1;j++){
            cout<<"*";
            
             }
             cout<<endl;
         
             inssp-=2;
          
}
}
void print20(int n){
    
}
int main(){

    int n ;
    cin>>n;
    print19(n);
}