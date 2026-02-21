#include<iostream>
using namespace std;
int main(){
    int l[]={4,2,1,1,5,4,6};
    for(int i=0;i<sizeof(l);i++)
    {
        bool flag=true;
        for(int j=i+1;j<sizeof(l);j++)
        {
            
            if(l[i]==l[j]){
                flag=false;
                
            }
        }
        if(flag==true){
            cout<<"1st unique element"<<l[i];
            break;
        }
    }
}