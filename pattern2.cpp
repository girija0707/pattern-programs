#include<iostream>
using namespace std;


int main(){

      int n;
      cin>>n;
    int i=1;
    int k=n;
        
    while(i<=n){  //row, i=row no
        int j=1;
    while(j<=n-i+1){  //cloumn, j=column no
      cout<<k;  //since the value is constant in all the columns we did cout<<k
    j++; //column increment 
    }
        i++; //row increment
        k--; 
        cout<<endl;
    }
  
}
/*
55555
4444
333
22
1
*/