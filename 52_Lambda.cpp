#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int y = 20;
    auto add = [=](int a){
        return x + y + a ;
    };
    cout << "Sum : " << add(5) << endl; //output sum = 35
    auto addByRef = [&x, &y](int a ){
        x = 30; //modfifying x
        return x + y + a;
    };
    cout << "Sum by reference " << addByRef(5) << endl; //output sum
    cout << "x after modification : " << x << endl;
    return 0;
}
