/*
II. Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether given key element is present in the array or not. Also, find total number
of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int binary(int *arr,int n,int key)
{
    int f=0,r=n-1,count=0;
    while(f!=r)
    {
        int mid = (f+r)/2;
        if(arr[mid]==key){
            cout<<"Number of comparision : "<<count+1<<endl;
            return 1;
        }
        else if(arr[mid]>key)
            r = mid;
        else
            f = mid;
        count++;
    }
    return 0;
}

int main()
{
    int t;
    cout<<"Number of Samples: "<<endl;
    cin>>t;
    while(t--)
    {
        int n,key;
        cout<<"Length of Array: "<<endl;
        cin>>n;
        int *a = (int*)malloc(n*sizeof(int));
        cout<<"Elements of the Array: "<<endl;
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<"Element to Check: "<<endl;
        cin>>key;
        binary(a,n,key) == 1 ? cout<<"Element is Present"<<endl : cout<<"Element is absent"<<endl ;
    }
    return 0;
}