#include <iostream>
using namespace std;
int main()
{
    double a = 0.1;
double b = 0.2;
double c = 0.3;
if(a + b == c)
 //This never prints on IEEE754-compliant machines
 std::cout << "This Computer is Magic!" << std::endl;
else
 std::cout << "This Computer is pretty normal, all things considered." << std::endl;
    return 0;

}