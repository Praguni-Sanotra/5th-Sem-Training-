// 2ND Approach
//USING the fail() function
//The fail function returns 
//true - if the file is failed to open 
//false - if the file was opened successfully
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt");
    if(my_file.fail()){
        cout<<"File failed to open"<<endl;
    }
    return 0;
}