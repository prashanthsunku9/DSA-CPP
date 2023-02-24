/*Print Keypad Combinations Code

Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.
Note : The order of strings are not important. Just print different strings in new lines.
Input Format :
Integer n
Output Format :
All possible strings in different lines
Constraints :
1 <= n <= 10^6
Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include <iostream>
#include <string>
#include<vector>
using namespace std;

vector<string>key={"",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void help(string k,string cur,int i){
    if(i==k.size()){
        // v.push_back(cur);
        cout<<cur<<endl;
        return;
    }

    for(auto p:key[k[i]-'0']){
        cur.push_back(p);
        help(k,cur,i+1);
       cur.pop_back();
    }
    // cur.pop_back();

}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */

    // vector<string>v;
    string k=to_string(num);
    help(k,"",0);

    // for(auto i:v){
    //     cout<<i<<endl;

    // }
}