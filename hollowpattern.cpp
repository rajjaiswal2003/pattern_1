#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    int col;
    cin>>col;
    for(int i=0;i<row;i++){
        if(i==0||i==row-1){
            for(int j=0;j<col;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int j=0;j<col-2;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
}