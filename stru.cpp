#include <iostream>
using namespace std;

struct employee
{
    
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee shivam;
    shivam.eId = 1;
    shivam.favChar = 'c';
    shivam.salary = 12000;
    cout << "The value is " << shivam.eId << endl;
    cout << "The value is " << shivam.favChar << endl;
    cout << "The value is " << shivam.salary << endl;
    return 0;
}