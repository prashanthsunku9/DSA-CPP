<<<<<<< HEAD
/*Number Pattern 2
Print the following pattern
Pattern for N = 4

      1
    2 3
  3 4 5      
4 5 6 7




Input Format :N (Total no. of rows)
Output Format :Pattern in N lines
*/

#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;

    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<count;
                count++;

            }
        }cout<<endl;
    }
=======
/*Number Pattern 2
Print the following pattern
Pattern for N = 4

      1
    2 3
  3 4 5      
4 5 6 7




Input Format :N (Total no. of rows)
Output Format :Pattern in N lines
*/

#include<iostream>
using namespace std;

int main(){

    int n;cin>>n;

    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<count;
                count++;

            }
        }cout<<endl;
    }
>>>>>>> master
}