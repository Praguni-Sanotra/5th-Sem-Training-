#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream my_file("example.txt");
    if(!my_file){
        cout<<"Unable to open file"<<endl;
    }
    my_file.close();
    return 1;
}
/*
1. By checking the file
ofstream my_file("example.txt");
*/