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

    int max=arr[0];
    int max_1=arr[0];
    int max_2=arr[0];

     for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max_1 && arr[i]!=max){
            max_1=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max_2 &&  arr[i]!=max && max_1){
            max_2=arr[i];
        }
    }


    cout<<max<<max_1<<max_2;

    return 0;
}