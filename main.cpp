#include<bits/stdc++.h>
using namespace std;

int main(){
    int nb2=0,nb, i=0, n;
    char j;
    string ch;
    cin >>n;
    cin.ignore();
    for(i;i<n;i=i+1){

        getline(cin,ch);
        nb=0;
        for (char j:ch){
            if(j=='1'){
                nb++;
            }
        }
        if (nb>=2)
        {
            nb2++;
        }

    }
    cout<<nb2<<endl;
}
