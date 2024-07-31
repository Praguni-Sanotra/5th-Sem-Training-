//WRITING IN THE FILE 
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //Open a text file for writing 
    ofstream my_file("example.txt");
    //Check the file for errors 
    if(!my_file){
        cout << "Error : Unable to open file" <<endl;
        return 1;
    }
    //Write multiple lines to the file
    my_file << "Prachi 20" <<endl;
    my_file << "Praguni 20" <<endl;
    my_file << "Lomash 21" <<endl;
    //close the file
    my_file.close();
    return 0;
}