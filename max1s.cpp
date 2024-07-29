#include<iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>&nums) {
              int n = nums.size();
                  
                  int res =0;
                  int curr=0;
                  for(int i=0; i<n;i++){
                    if(nums.at(i)==1)
                    for(int j=0; i<n;i++){
                        if(nums.at(i)==nums.at(j)){
                           curr=curr+1;
                           res=max(curr,res);
                        }
                        else{
                              curr=0;
                            }    
                                          
                    } 
                  }
                  return res;

        
    }
int main(){
             vector<int>nums={1,1,0,1,1,1};
             cout << "most consecutive ones: " <<findMaxConsecutiveOnes(nums) << endl;

    return 0;
}
