#include <iostream>
using namespace std;
int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main()
{
    cout << factorial(5);

    return 0;
}