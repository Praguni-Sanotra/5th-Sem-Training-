//Appending data into existing file 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Open a text file for appending 
    ofstream my_file("example.txt" , ios::app);
    //if the file doesn't open successfully , print an error message 
    if(!my_file){
        cout << "Failed to open file for appending."<<endl;
        return 1;
    }
    //append multiple lines to the file 
    my_file << "Adhvika 20" <<endl;
    my_file << "Vansh 20"<<endl;
    my_file << "Nitika 20"<<endl;
    //Close the file
    my_file.close();
    return 0;
}