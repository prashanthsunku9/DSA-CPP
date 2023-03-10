#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* a, int n) {
    // Write your code here

  unordered_map<int,int>m;

int sum=0;
int size=0;
  for(int i=0;i<n;i++){
        sum+=a[i];

        if(a[i]==0 && sum==0){
            size=0;
        }
        if(sum==0){
            size=i+1;
        }else{
            if(m.find(sum)!=m.end()){
                size=max(size,i-m[sum]);
            }else{
                m[sum]=i;
            }
        }


  }
  return size;
}