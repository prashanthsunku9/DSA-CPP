/*Print Subsets of Array

Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
Input format :
Line 1 : Integer n, Size of array
Line 2 : Array elements (separated by space)
Constraints :
1 <= n <= 15
Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12 
*/

#include<vector>
void f(int*a,vector<int>&ans,int n,int i){

    if(i==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
        return;
    }
    ans.push_back(a[i]);
    f(a,ans,n,i+1);
    ans.pop_back();
    f(a,ans,n,i+1);
}


void printSubsetsOfArray(int input[], int size) {
	// Write your code here
    vector<int>ans;
    f(input,ans,size,0);
    
}