/*Print Permutations

Given an input string (STR), print all possible permutations of the input string.
Note:
The input string may contain the same characters, so there will also be the same permutations.
The order of permutations doesn’t matter.
Input Format:
The only input line contains a string (STR) of alphabets in lower case
Output Format:
Print each permutations in a new line
Constraint:
1<=length of STR<=8
Time Limit: 1sec
Sample Input 1:
cba
Sample Output 1:
abc
acb
bac
bca
cab
cba
*/

#include <iostream>
#include <string>
using namespace std;
#include<vector>

void per(string s,vector<char>&ds,int*f){
     if(s.size()==ds.size()){
        for(auto i:ds){
            cout<<i;
        }cout<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        if(!f[i]){
            ds.push_back(s[i]);
            f[i]=1;
            per(s,ds,f);
            f[i]=0;
            ds.pop_back();
        }
    }
    }




void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
     vector<char>ds;
    
    int vis[input.size()]={0};
    
    for(int i=0;i<input.size();i++){
        vis[i]=0;
    }
    
    per(input,ds,vis);
    
}
