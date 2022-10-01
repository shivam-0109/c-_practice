#include <iostream>
using namespace std;
#include <cmath>
int square(int num){
    int squ=num*num;
    return squ;
}
int main()
{
    int a,b,c;
    cout<<"enter the hypotenus , perpendicular and base one by one:";
    cin>>a>>b>>c;
    int x=square(a);
    int y=square(b);
    int z=square(c);
    int q=y+z;
    if(x==q){
        cout<<"pythagoras theorem applied";
    }else{
        cout<<"not applicable";
    }
    return 0;
}
    

