#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    
    getline(cin,str);
    cout<<str<<endl;

   
    str.push_back('s');
    cout<<"new string with pushback :"<<str<<endl;   

     str.pop_back();
    cout<<"new string with popback :"<<str<<endl;                                                               
    
    return 0;
}