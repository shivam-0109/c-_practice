#include <iostream>
using namespace std;

int f(int n){

    if(n==0||n==1){
        return 1;
    }else{
        return n*f(n-1);
    }
}

int main()
{
    int a;
    cin>>a;
    cout<<f(a);
    
    return 0;
}