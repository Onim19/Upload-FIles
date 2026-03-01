#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int length;
        string name;
        cin>>length>>name;
        int count=0;
        for(int j=0;j<name.length();j++){
            if(name.at(j)>='a' && name.at(j)<='z'){
                count++;
            }
        }
        int position = name.find("T");

        if(name.length()==5 && (position>=0 && position<=4) && count==4){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}
