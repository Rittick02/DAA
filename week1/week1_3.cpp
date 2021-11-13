/*
III. Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether a given key element is present in the sorted array or not. For an array
arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k ] and so on. Once the interval (arr[2k ] < key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
to find the element
key. (Complexity < O(n), where n is the number of elements need to be scanned for searching):
Jump Search
Input format:
The first line contains number of test cases, T.
For each test case, there will be three input lines.
First line contains n (the size of array).
Second line contains n space-separated integers describing array.
Third line contains the key element that need to be searched in the array.
Output format:
The output will have T number of lines.
For each test case, output will be “Present” if the key element is found in the array, otherwise
“Not Present”. 
*/
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