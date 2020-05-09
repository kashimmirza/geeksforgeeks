#include<bits/stdc++.h>
using namespace std;
int main(){
    char set[]={'a','b','c'};



    int l=pow(2,3);
    for(int i=0;i<l;i++){
        for(int j=0;j<3;j++){

         if(i&(1<<j)){

            cout<<set[j]<<" ";
         }

    }
     cout<<endl;
    }






}
