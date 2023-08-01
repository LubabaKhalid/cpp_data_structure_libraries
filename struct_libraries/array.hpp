#include<iostream>
using namespace std;

struct Array
{
    int *arr = nullptr;
    int size = -3;
};


Array Create(int s=10)
{
    if(s<1)
    {
        s=0;
    }
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
    if(arr.size>0)
    {
    delete [] arr.arr;
    arr.size = 0;
    }
}
int Get(Array arr, const int idx)
{
    if(idx<0&&idx>=arr.size)
        exit(0);
    return arr.arr[idx];
}
void Set(Array arr, const int idx, const int & val)
{
    if(idx>-1)
    {
    arr.arr[idx] = val;
    }
    else{
        cout<<"Error "<<endl;
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
void SetArray(Array arr, const int size, int arr1[])
{
    DeleteArray(arr);
    Array sarr=Create(size);
    
    for(int i=0;i<size;i++){
        sarr.arr[i]=arr1[i];
    }
}


void Push(Array& arr1, const int& val)
{
    Resize(arr1,arr1.size+1);
    arr1.arr[arr1.size-1]=val;
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
    return -1;
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
    Array unarr=Copy(arr1);
    for(int i=0;i<arr2.size;i++)
    {
        if((Find(unarr,arr2.arr[i]))==-1)
        {
            Push(unarr,arr2.arr[i]);
        }
    }
    return unarr;
}
Array Intersection(Array arr1, Array arr2)
{
    Array inarr=Create();
    for(int i=0;i<arr1.size;i++)
    {
        if(Find(arr2,arr1.arr[i])!=-1)
        {
            Push(inarr,arr1.arr[i]);
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
