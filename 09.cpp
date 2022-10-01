#include<iostream>
using namespace std;
int main()
{
    int num, i, res;
    
    cin>>num;
    for(i=1; i<=10; i++)
    {
        res = num*i;
        cout<<res<<endl;
        cout<<endl;
    }
    cout<<endl;
    return 0;
}