#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prev=n&1;
    n=n>>1;
    bool flag=true;
    while(n>0){
        int cur=n&1;
        if(cur==prev){
            cout<<"False";
            flag=false;
            break;
            }
            prev=cur;
            n=n>>1;
        }
    if(flag==true){
        cout<<"True";
        }
    }
        