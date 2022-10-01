#include <iostream>
using namespace std;
int main(){
    double a=0;
    
for(int i=0;i<10;i++){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
    a=a+x;
}
cout<<"average is "<<a/10<<endl;
return 0;


}