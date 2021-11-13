/*
II. Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k 
such that arr[i] + arr[j] = arr[k].
Input format:
The first line contains number of test cases, T.
For each test case, there will be two input lines.
First line contains n (the size of array).
Second line contains space-separated integers describing array.
Output:
The output will have T number of lines.
For each test case T, print the value of i, j and k, if found else print “No sequence found”.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

void find_sequence(int* arr,int n)
{
    for(int i=0;i<n;i++)
    {
        int j=0,k=n-1;
        while(j<k)
        {
            int sum = arr[j]+arr[k];
            if(sum==arr[i] && (i!=j && i!=k))
            {
                cout<<j+1<<" "<<k+1<<" "<<i+1<<endl;
                return;
            }
            else if(sum>arr[i])
                k--;
            else
                j++;
        }
    }
    cout<<"No Sequence Found"<<endl;
}

int main()
{
    int t;
    cout<<"Number of Test Cases: "<<endl;
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"The Size of Array: "<<endl;
        cin>>n;
        int *a = (int*)malloc(n*sizeof(int));
        cout<<"Element of the Array"<<endl;
        for (int i=0;i<n;i++)
            cin>>a[i];
        find_sequence(a,n);
    }
    return 0;
}