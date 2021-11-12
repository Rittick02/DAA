#include<iostream>
#include<stdlib.h>
using namespace std;

int jump_search(int *arr,int n,int key)
{
    int i,count=0;
    for(i=0;i<n;i+=2)
    {
        count++;
        if(arr[i]==key)
        {
            cout<<"Number of comparisions : "<<count++<<endl;
            return 1;
        }
        else if(arr[i]>key)
            break;
    }
    for(int j=i-1;j<n;j++)
    {
        count++;
        if(arr[j]==key)
        {
            cout<<"Number of comparisions : "<<count++<<endl;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int t;
    cout<<"Number of Sample: "<<endl;
    cin>>t;
    while(t--)
    {
        int n,key;
        cout<<"Enter Length of the Array: "<<endl;
        cin>>n;
        int *a = (int*)malloc(n*sizeof(int));
        cout<<"Enter Element of the Array: "<<endl;
        for(int i=0; i<n; i++)
            cin>>a[i];
        cout<<"Enter the Key: "<<endl;
        cin>>key;
        jump_search(a,n,key) == 1 ? cout<<"Element is Present."<<endl : cout<<"Element is Absent."<<endl ;
    }
    
}