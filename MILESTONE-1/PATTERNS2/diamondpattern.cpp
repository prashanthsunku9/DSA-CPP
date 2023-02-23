/*Diamondofstars
Send Feedback
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5



The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
*/


#include<iostream>
using namespace std;

int main(){
    int q;
    cin>>q;
    
    int i,j,k,l,m,n;
    int p=q/2+1;
    for(i=1;i<=p;i++){
        for(j=1;j<=p-i;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for(l=p-1;l>=1;l--){
        for(m=1;m<=p-l;m++){
            cout<<" ";
        }
        for(n=1;n<=2*l-1;n++){
            cout<<"*";
            
        }cout<<endl;
        
    }
    
}
