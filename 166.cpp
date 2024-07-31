// ALTER APPROACH 
// USING is_open() returns 
// True - if file is opened successfully
// False - if file is not opened successfully or is in state of error
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt");
    if(!my_file.is_open()){
        cout<<"Unable to open file"<<endl;
    }
    else{
        cout<<"File opened successfully"<<endl;
        }
        return 0;
}