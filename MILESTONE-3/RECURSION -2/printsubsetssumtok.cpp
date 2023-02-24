/*Print Subset Sum to K

Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print them in different lines.
Input format :
Line 1 : Size of input array
Line 2 : Array elements separated by space
Line 3 : K 
Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1
*/

#include<vector>
void f(int*a,vector<int>b,int n,int i,int k,int &sum){
    
    if(i==n){
        if(sum==k){
            for(auto i:b){
                cout<<i<<" ";
            }cout<<endl;
            
        }
        return;
    }
    sum+=a[i];
    b.push_back(a[i]);
    f(a,b,n,i+1,k,sum);
    
    sum-=a[i];
    b.pop_back();
    f(a,b,n,i+1,k,sum);
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int sum=0;
    vector<int>ans;
    f(input,ans,size,0,k,sum);
}
