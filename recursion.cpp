// when a function calls itself when meeting certain conditons which is called base condition

#include<bits/stdc++.h>
using namespace std;
int cnt =0;
void print(){
    if(cnt==4)//base codn
    return;
    cout<<cnt<<endl;
    cnt++;

    print();


}

int main(){
    print();
  return 0;
}
// recursion tree is representation of the recursion