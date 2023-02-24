/*Replace pi (recursive)
Send Feedback
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50
*/

// Change in the given string itself. So no need to return or print anything
#include<string.h>

void help(char*a,int n){

	if(a[0]=='\0'){
		return;
	}

	if(a[0]=='p' && a[1]=='i'){
		a[0]='3';
		a[1]='.';
		for(int k=n+2;k>1;k--){
           a[k]=a[k-2];
		}
		a[2]='1';
		a[3]='4';
	}
	help(a+1,n);
}
void replacePi(char input[]) {
	// Write your code here

    int n=strlen(input);
	help(input,n);
	  


}
