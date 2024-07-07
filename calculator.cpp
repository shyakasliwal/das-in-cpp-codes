#include<iostream>
using namespace std;

int main(){ 
            int a;
            int b;
            cin>>a>>b;
            cout<<endl;

            char op;
            cin>>op;
        

            switch(op){
                case('+'):{
                             cout<< (a+b) <<endl;
                             break;
                }
                case('-'):{
                             cout<< (a-b) <<endl;
                             break;
                }
                case('*'):{
                             cout<< (a*b) <<endl;
                             break;
                }
                case('/'):{
                             cout<< (a/b) <<endl;
                             break;         
                }
                default:{
                         cout<<"please enter a valid argument"<<endl;
                         }

            }
            

    return 0;
}