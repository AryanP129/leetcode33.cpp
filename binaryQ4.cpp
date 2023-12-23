//Rotated and binary search
#include<iostream>
using namespace std;
//to find pivot element
int Pivot_Element(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binary_search(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e-1;
    //int mid=(start+end)/2;
    int mid=start+(end-start)/2;  //chalaki wala step
    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        //mid=(start+end)/2;
        mid=start+(end-start)/2;

    }
    return -1;
}
