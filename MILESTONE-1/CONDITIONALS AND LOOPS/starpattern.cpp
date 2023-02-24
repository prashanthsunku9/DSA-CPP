<<<<<<< HEAD
/*Start Pattern

Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :N (Total no. of rows)
Output Format :Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 */

#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
     int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }cout<<endl;
    }
}

=======
/*Start Pattern

Print the following pattern
Pattern for N = 4



The dots represent spaces.



Input Format :N (Total no. of rows)
Output Format :Pattern in N lines
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
 */

#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;
     int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }cout<<endl;
    }
}

>>>>>>> master
