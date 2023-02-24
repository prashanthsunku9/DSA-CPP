/*All Indices of Number

Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in the output array (in increasing order).
Do this recursively. Indexing in the array starts from 0.
Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x
Output Format :
Return the size of the output array
Constraints :
1 <= N <= 10^3
Sample Input :
5
9 8 10 8 8
8
Sample Output :
1 3 4

*/

#include<vector>
void f(int*a,int n,int x,int i,int*b,int&k){
    if(i==n){
        return;
    }
    if(a[i]==x){
        b[k]=i;
        k++;
    }
    f(a,n,x,i+1,b,k);
}
int allIndexes(int a[], int size, int x, int b[]) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
    int k=0;
    f(a,size,x,0,b,k);
     return k;
}