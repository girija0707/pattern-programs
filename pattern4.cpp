#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i,j;
    int val=1; //to initialize row every time
    int stars=1; //initialize stars
    
    i=1;
    while(i<=n){ //row
        int spaces=n-i; //spaces initialization
        int j=1; //cloumn
        while(j<=spaces){ //to print spaces
            cout<<' ';
            j++;
        
        }
        int ival=val; //internal variable to print number
        j=1; //column
        while(j<=stars){ //to print numbers
            
        cout<<ival;
        if(j<=stars/2){ //till the val of column is=stars/2,we have to increment the number 
           ival++;
        }
            else{
                ival--;//after that we have to decrement the value
            }
        j++;
       
            
        
        }
        i++;
        val++; //every time the row changes the starting value increment
        spaces--; //every time row changes the spaces decrement
        stars=stars+2; //every time row changes stars increment by two
        cout<<endl;
        
        
        
    }
    
}
/*
   1
  232
 34543
4567654
*/

