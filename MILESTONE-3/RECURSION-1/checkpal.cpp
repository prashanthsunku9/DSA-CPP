/*Check Palindrome (recursive)

Check whether a given String S is a palindrome using recursion. Return true or false.
Input Format :
String S
Output Format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
racecar
Sample Output 1:
true
Sample Input 2 :
ninja
Sample Output 2:
false
*/

#include<string.h>

bool f(char *a,int n,int i,int l){
    if(i>l){
        return true;
    }
    if(a[i]!=a[l]){
        return false;
    }
    return f(a,n,i+1,l-1);
} 
bool checkPalindrome(char input[]) {
    // Write your code here
 
    int l=strlen(input);
    return f(input,l,0,l-1);
    


}