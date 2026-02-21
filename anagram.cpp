// Online C++ compiler to run C++ program online
#include <iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    // set<int> list1 = {1,2,3,4,5};
    string s1="silent", s2="listen";
    if(s1.length()!=s2.length())
    {
        cout<<"Not anagram";
    }
    else{
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"anagram";
        }
        else{
            cout<<"not Anagram";
        }
    }
    
}