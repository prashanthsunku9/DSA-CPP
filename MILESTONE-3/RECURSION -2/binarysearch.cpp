/*Binary Search (Recursive)
Send Feedback
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :

Line 1 : Array size

Line 2 : Array elements (separated by space)

Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 
*/

int f(int*arr,int l,int r,int x){
    
 if (r >= l)
{
int mid = l + (r - l)/2;
// If the element is present at the middle itself
if (arr[mid] == x) return mid;
// If element is smaller than mid, then it can only be present
// in left subarray
if (arr[mid] > x) return f(arr, l, mid-1, x);
// Else the element can only be present in right subarray
return f(arr, mid+1, r, x);
}
// We reach here when element is not present in array
return -1;
    
}
int binarySearch(int input[], int size, int element) {
    // Write your code here
    
    return f(input,0,size-1,element);

}