#include<iostream>
using namespace std;

void shyam(int n){
             if(n==0){
                return ;
             }
              shyam(n-1);
             cout<< n<<" ";
            
             
}
int main(){
            int n=4;
            shyam(n);
   

  return 0;
}