#include <iostream>
using namespace std;
int square (int a,int b){
    int c=1;
    for(int i=0;i<b;i++){
        c+=(a*a);
    }
    return c;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int s=square(a,b);
    cout<<s<<endl;
    
    return 0;
}