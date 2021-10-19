//Deletion in array
#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,12,18,8};
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int index=2;
    for(int i=index; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
