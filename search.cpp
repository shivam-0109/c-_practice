#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pass;
    cout<<"enter no to search";
    cin>>pass;

    for(int i=0;i<n;i++){
        if(arr[i]==pass){
            cout<<i+1<<endl;
            break;
        }
    }
    return 0;
}