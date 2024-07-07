#include<iostream>
using namespace std;
int removeduplicate(int arr[],int n){
    int temp;
    for(int i=0;i=n-1;i++){
        if(arr[i]==arr[i+1]){
       temp+=arr[i+1];
        }
        else{
            return -1;
        }
      return arr[i];
    }
}
int main(){
           
             int arr[]= {2,2,4,5,6,7};
             

              removeduplicate(arr,6);
              cout<<"after removing of duplicate new array is : "<<endl;
    
    
    return 0;
}