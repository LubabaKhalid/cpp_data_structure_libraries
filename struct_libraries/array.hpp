#include<iostream>
using namespace std;

struct Array
{
    int *arr = nullptr;
    int size = -3;
};


Array Create(int s=10)
{
    cout<<"\n\n------Create Incomplete------\n\n";
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
    Array newarr=Create(s);
    int minsize;
    if(s<arr.size)
    {
        minsize=s;
    }
    else
    {
        minsize=arr.size;
    }
    for(int i=0;i<minsize;i++)
    {
        newarr.arr[i]=arr.arr[i];
    }
    DeleteArray(arr);
    arr.arr=newarr.arr;
    arr.size=s;
    
}
Array Copy(const Array arr)
{
    
    Array coparr=Create(arr.size);
    for(int i=0;i<arr.size;i++)
    {
        coparr.arr[i]=arr.arr[i];
    }
    return coparr;
}
int Find(const Array arr, const int val)
{
    for(int i=0;i<arr.size;i++)
    {
        if(arr.arr[i]==val)
        {
            return i;
        }
    }
    return -2;
}
Array Concat(Array arr1, Array arr2)
{
    Array arr3=Create(arr1.size+arr2.size);
    for(int i=0;i<arr1.size;i++)
    {
        arr3.arr[i]=arr1.arr[i];
    }
    for(int i=0;i<arr2.size;i++)
    {
        arr3.arr[i]=arr2.arr[i];
    }
    return arr3;
}
void Sort(Array arr)
{
    for(int i=0;i<arr.size-1;i++)
    {
        if(arr.arr[i]>arr.arr[i+1])
        {
            arr.arr[i],arr.arr[i+1]=arr.arr[i+1],arr.arr[i];
        }
    }
}
Array Union(Array arr1, Array arr2)
{
    Array uarr=Create();
   for(int i=0;i<arr1.size-1;i++)
    {
        if(arr1.arr[i]>arr1.arr[i+1])
        {
            arr1.arr[i],arr1.arr[i+1]=arr1.arr[i+1],arr1.arr[i];
        }
    }
    for(int i=0;i<arr2.size-1;i++)
    {
        if(arr2.arr[i]>arr2.arr[i+1])
        {
            arr2.arr[i],arr2.arr[i+1]=arr2.arr[i+1],arr2.arr[i];
        }
    }
    int i=0,j=0,c=0;
    while(i<arr1.size && j<arr2.size)
    {
        if(arr1.arr[i]==arr2.arr[j])
        {
            uarr.arr[c]=arr1.arr[i];
            i++;
            j++;
            c++;
        }
        else if(arr1.arr[i]<arr2.arr[j])
        {
            uarr.arr[c]=arr1.arr[i];
            i++;
            c++;
        }
        else
        {
            uarr.arr[c]=arr2.arr[j];
            j++;
            c++;
        }
    }
    
    return uarr;
}
Array Intersection(Array arr1, Array arr2)
{
    Array inarr=Create();
    int c=0;
    for(int i=0;i<arr1.size;i++)
    {
        for(int j=0;j<arr2.size;j++)
        {
            if(arr1.arr[i]==arr2.arr[j])
            {
                inarr.arr[c]=arr1.arr[i];
                c++;
            }
        }
    }
    return inarr;
}
Array Difference(Array arr1, Array arr2)
{
    Array arr3=Create(arr1.size);
    for(int i=0;i<arr1.size;i++)
    {
        arr3.arr[i]=arr1.arr[i]-arr2.arr[i];
    }
    return arr3;
}
void Push(Array& arr1, const int& val)
{
    
}