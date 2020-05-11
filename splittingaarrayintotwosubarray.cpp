#include<bits/stdc++.h>
using namespace std;
int searchingpoint(int a[], int n){



  int left_sum=0;
  int right_sum;
  for(int i=0;i<n;i++){
        left_sum+=a[i];
        right_sum=0;
    for(int j=i+1;j<n;j++){
        right_sum+=a[j];
  if(left_sum==right_sum){
    return i+1;

  }


    }
  }
  return -1;



}
int findingpointandprint(int a[],int n){
      int splitpoint=searchingpoint(a,n);
     for(int i=0;i<n;i++){
            if(splitpoint==-1||splitpoint==n){
                cout<<"notpossible"<<endl;
                break;
            }
        else if(splitpoint==i){
            cout<<endl;
        }
        cout<<a[i]<<" ";



     }




}
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   findingpointandprint(a,n);



}
