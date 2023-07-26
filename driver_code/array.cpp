#include<iostream>
#include"../struct_libraries/array.hpp"
using namespace std;



int main()
{
    Array a1 = Create(5);
    Set(a1,0,0);
    Set(a1,1,2);
    Set(a1,2,4);
    Set(a1,3,6);
    Set(a1,4,8);
    Print(a1);
    cout<<"3rd index = "<<Get(a1,3)<<endl;
    Array a2 = Create(6);
    
    {
        int temp[6] = {1,3,5,7,9,11};
        SetArray(a2,6,temp);
    }
    
    Print(a2);

    // Resize(a1,8);
    
    // {
    //     int temp[8] = {0,2,4,6,8,10,12,14};
    //     SetArray(a2,8,temp);
    // }

    Array c1 = Copy(a1);
    Set(c1,0,99);
    cout<<"a1 = "; Print(a1);
    cout<<"c1 = "; Print(c1);
    cout<<"Find(a1,99) = "<<Find(a1,99)<<endl;
    cout<<"Find(c1,99) = "<<Find(c1,99)<<endl;
    cout<<"Find(a2,5) = "<<Find(a1,99)<<endl;
    cout<<"Find(a1,8) = "<<Find(c1,99)<<endl;

    Set(a2,3,6);
    Set(a1,3,1);
    Array c11 = Concat(a1,a2);
    cout<<"c11 = "; Print(c11);
    Array u1 = Union(a1,a2);
    cout<<"u1 = "; Print(u1);
    Array u11 = Union(c11,a2);
    cout<<"u11 = "; Print(u11);
    Array u2 = Union(c1,a2);
    cout<<"u2 = "; Print(u2);
    Array i1 = Intersection(c1,a1);
    cout<<"i1 = "; Print(i1);
    Array i2 = Intersection(a1,a2);
    cout<<"i2 = "; Print(i2);
    Array d1 = Difference(a1,c1);
    cout<<"d1 = "; Print(d1);
    Array d2 = Difference(c1,a1);
    cout<<"d2 = "; Print(d2);
    cout<<"Before Sorting c11 = "; Print(c11);
    Sort(c11);
    cout<<"After Sorting c11 = "; Print(c11);
    DeleteArray(a1);
    DeleteArray(a2);
    return 0;
}