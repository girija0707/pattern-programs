#include<iostream>
using namespace std;


int main(){

      int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=1; //for spaces
        while(spaces<=n-i){
            cout<<' ';
            spaces=spaces+1;
        }
        int j=1; //for 1st triangle
        while(j<=i){
            cout<<'*';
                j++;
        }
        j=i-1; //for 2nd triangle
        while(j>=1){
            cout<<'*';
            j--;
        }
        cout<<endl;
        i++;
    }
  
}
/*
    *
   ***
  *****
 *******
*********
*/
