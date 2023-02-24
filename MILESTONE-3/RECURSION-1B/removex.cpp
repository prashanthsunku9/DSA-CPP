/*Remove X

Given a string, compute recursively a new string where all 'x' chars have been removed.
Input format :
String S
Output format :
Modified String
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:
*/

// Change in the given string itself. So no need to return or print anything
#include<string.h>
void f(char input[],int j) {
    if (input[j] == '\0') {
        return; 
    }
    f(input, j + 1); 
    if (input[j] == 'x') { 
        int len = strlen(input);
        int i;
        for (i = j + 1; i < len; i++) {
            input[i - 1] = input[i];
        }
        input[i - 1] = '\0'; 
    }
}

void removeX(char input[]){
    f(input,0);
}
