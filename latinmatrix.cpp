#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n+1;
    int temp;
    for(int i=1;i<=n;i++){
            temp=k;
     while(temp<=n){

        cout<<temp<<" ";
        temp++;

     }
        for(int j=1;j<k;j++){

            cout<<j<<" ";
        }
        cout<<endl;
        k--;

    }







}
