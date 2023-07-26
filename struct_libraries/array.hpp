#include<iostream>
using namespace std;

struct Array
{
    int *arr = nullptr;
    int size = -3;
};


Array Create(int s=10)
{
    cout<<"\n\n------Create Incomplete2------\n\n";
    Array ptr;
    ptr.arr = new int[s];
    ptr.size = s;
    return ptr;
}   // Major fault
void Print(Array arr)
{
    cout<<"[";
    for(int i=0;i<arr.size;i++){
        cout<<arr.arr[i]<<((i==arr.size-1)?"]\n":" , ");
    }
    if(arr.size==0)
        cout<<"]\n";
}
void DeleteArray(Array& arr)
{
    cout<<"\n\n------Delete Incomplete------\n\n";
    delete [] arr.arr;
    arr.size = 0;
}
int Get(Array arr, const int idx)
{
    cout<<"\n\n------Get Incomplete------\n\n";
    return arr.arr[idx];
}
void Set(Array arr, const int idx, const int & val)
{
    cout<<"\n\n------Set Incomplete------\n\n";
    arr.arr[idx] = val;
}
void SetArray(Array arr, const int size, int arr1[])
{
    cout<<"\n\n------Set Array Incomplete------\n\n";
    
    for(int i=0;i<size;i++){
        arr.arr[i]=arr1[i];
    }
}
void Resize(Array& arr, const int s)
{
    cout<<"\n\n------Resize Incomplete------\n\n";
    
}
Array Copy(const Array arr)
{
    cout<<"\n\n------Copy Incomplete------\n\n";
    Array a;
    return a;
}
int Find(const Array arr, const int val)
{
    cout<<"\n\n------Find Incomplete------\n\n";
    return -2;
}
Array Concat(Array arr1, Array arr2)
{
    cout<<"\n\n------Concat Incomplete------\n\n";
    Array a;
    return a;
}
void Sort(Array arr)
{
    cout<<"\n\n------Sort Incomplete------\n\n";
}
Array Union(Array arr1, Array arr2)
{
    cout<<"\n\n------Union Incomplete------\n\n";
    Array a;
    return a;
}
Array Intersection(Array arr1, Array arr2)
{
    cout<<"\n\n------Intersection Incomplete------\n\n";
    Array a;
    return a;
}
Array Difference(Array arr1, Array arr2)
{
    cout<<"\n\n------Difference Incomplete------\n\n";
    Array a;
    return a;
}
void Push(Array& arr1, const int& val)
{
    cout<<"\n\n------Push Incomplete------\n\n";
}