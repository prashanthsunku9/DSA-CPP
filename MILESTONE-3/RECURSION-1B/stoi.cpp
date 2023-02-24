/*String to Integer

Write a recursive function to convert a given string into the number it represents. That is input will be a numeric string that contains only numbers, you need to convert the string into corresponding integer and return the answer.
Input format :
Numeric string S (string, Eg. "1234")
Output format :
Corresponding integer N (int, Eg. 1234)
Constraints :
0 < |S| <= 9
where |S| represents length of string S.
Sample Input 1 :
00001231
Sample Output 1 :
1231
Sample Input 2 :
12567
Sample Output 2 :
12567
*/

#include<string.h>

int help(char*a,int i){
   if(i<0){
       return 0;
   }

    if(i==0){
        return a[i]-'0';
    }

    return help(a,i-1)*10+a[i]-'0';
   

}
int stringToNumber(char input[]) {
    // Write your code here
  int n=strlen(input);
  return help(input,n-1);

}