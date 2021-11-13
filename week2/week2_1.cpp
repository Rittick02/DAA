/*
Week 2:
I. Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to 
find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. 
(Time Complexity = O(log n))
Input format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Third line contains the key element that need to be searched in the array.
Output format:
The output will have T number of lines.
For each test case T, output will be the key element and its number of copies in the array if the
key element is present in the array otherwise print “Key not present”.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

int no_occur(int* arr,int n,int target,int i)
{
    int j,k;
    for(j=i-1;j>=0;j--)
        if(arr[j]!=target)
            break;
    for(k=i+1;k<n;k++)
        if(arr[k]!=target)
            break;
    return k-j-1;
}

void find(int* arr,int n,int target)
{
    int count=0,f=0,l=n-1;
    while(f<l)
    {
        int mid = l+(f-l)/2;
        if(arr[mid]==target){
            cout<<"No of Occurance of : "<<target<<" - "<<no_occur(arr,n,target,mid)<<endl;
            return ;
        }
        else if(arr[mid]>target)
            l = mid-1;
        else
            f = mid+1;
    }
    cout<<"Not Present";
}

int main()
{
    int t;
    cout<<"Number of Test Cases: "<<endl;
    cin>>t;
    while(t--)
    {
        int n,key;
        cout<<"The Size of Array: "<<endl;
        cin>>n;
        int *a = (int*)malloc(n*sizeof(int));
        cout<<"Element of the Array"<<endl;
        for (int i=0;i<n;i++)
            cin>>a[i];
        cout<<"Enter the Key."<<endl;
        cin>>key;
        find(a,n,key);
    }
    return 0;
}