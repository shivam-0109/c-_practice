#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int p = x + y;  //: Addition
    int q = x - y;  // : Subtraction
    int r = x * y;  // :Multiplication
    float s = x / y;  // : Float Division
    int t = x / y;  //: Int Division
    int u = x % y;  //: Modulo
    int v = pow(x,y); // :

    cout<<p<<endl;
    cout<<q<<endl;
    cout<<r<<endl;
    cout<<s<<endl;
    cout<<t<<endl;
    cout<<u<<endl;
    cout<<v<<endl;

    return 0;
}