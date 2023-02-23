/*Triangle of Numbers
Send Feedback
Print the following pattern for the given number of rows.
Pattern for N = 4



The dots represent spaces.



Input format :
Integer N (Total no. of rows)
Output format :
Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
           1
          232
         34543
        4567654
       567898765
Sample Input 2:
4
Sample Output 2:
           1
          232
         34543
        4567654
        */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int i,j,k,l;
    
    for(i=1;i<=n;i++){
        int count=i;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<count;
            count++;
        }count=count-2;
        for(l=1;l<i;l++){
            cout<<count;
            count--;
        }cout<<endl;
    }
}