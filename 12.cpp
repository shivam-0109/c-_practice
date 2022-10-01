#include <iostream>
using namespace std;
int main()
{
    //if ka baad ()double bracket and statement and cout and else,else if 
    int saving ;
    cin>>saving;
    if(saving>5000){
        if(saving>10000){
            cout<<"Road trip with neha\n";
        }
        else {
            cout<<"shoping with neha\n";
        }
    
    }else if (saving>2000){
        if (saving>3500){
            cout<<"shoping with rashmi\n";

        }else{
            cout<<"dinner with rashmi\n";
        }
        

    
    }else {
        cout<<"with friends\n";
    }
    return 0;

}