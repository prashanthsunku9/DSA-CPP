/*Print all Codes - String

Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
Input format :
A numeric string S
Output Format :
All possible codes in different lines
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
*/

#include <string>
using namespace std;
void help(string a, string cur,int i){ 
    
    if(i>=a.size()){
        cout<<cur<<endl;
        return;
    }

    cur.push_back((a[i]-'0')+'a'-1);
    help(a,cur,i+1);
    // if(i==0) cout<<cur<<"---\n";
    cur.pop_back();
    if(i+1<a.size()  && ((a[i]-'0')*10+(a[i+1]-'0')>=10 && (a[i]-'0')*10+(a[i+1]-'0')<=26)){
        
    
      cur.push_back((a[i] - '0')*10 + (a[i + 1] - '0')+'a'-1);
      help(a,cur,i+2);
    } 
}
            
void printAllPossibleCodes(string input) {
    
    help(input, "",0);
}