#include<iostream>
using namespace std;
 
void twosum(int arr[],int n){

    int target;
    cin>>target;
    for(int i = 0;i<n;i++){
         int twos = target -arr[i];
         for(int j=i+1;j<n;j++){
         if(twos==arr[j]){
            cout<<i<<" "<<j<<endl;
        }
        
    }
}  
}   

int main(){
       int n=4;
       int arr[]={2,7,11,15};
       twosum(arr,4);
}