#include<bits/stdc++.h>
using namespace std;
int gcm(int a, int b){
     if(a==0)
        return b;
    return  gcm(b%a, a);



}
int lcm(int a, int b){

   return (a*b)/gcm(a,b);

}


int main(){
    int a, b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;












}
