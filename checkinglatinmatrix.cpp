#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4][4]={{1,2,3,4},{2,1,4,3},{4,3,2,1},{3,4,1,2}};
    int s=sizeof(a[0])/sizeof(a[0][0]);
    vector< set<int> >row(s);
    vector<set<int> >col(s);
    int invalid=0;
    for(int i=0;i<s;i++){
            for(int j=0;j<s;j++){
                row[i].insert(a[i][j]);
                col[j].insert(a[i][j]);
                if(a[i][j]>s||a[i][j]<=0){
                    invalid++;
                }

            }


    }
    int numofrow=0;
    int numofcol=0;
    for(int i=0;i<s;i++){
            cout<<row[i].size()<<endl;

        if(row.size()!=s){

            numofrow++;
        }
          if(col.size()!=s){

            numofcol++;
        }



        }

    }









