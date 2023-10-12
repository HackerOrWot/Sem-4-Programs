#include<iostream>
#include<string>
using namespace std;

class house{
    public:
    int length,breadth;
    public:
    void setData(int x,int y){
        length=x;
        breadth=y;
    }
    void area(){
        cout<<"Area Of the house:"<<length*breadth<<endl;
    }
};

int main(){
int x,y;
cout<<"Enter Length and Breadth for your house:"<<endl;
cin>>x>>y;

house h1;
h1.setData(x,y);
h1.area();
return 0;

}