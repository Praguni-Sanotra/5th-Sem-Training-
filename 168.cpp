#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream my_file("example.txt");
    //check the file for errors
    if(!my_file){
        cout<<"Error : Unable to open the file" <<endl;
        return 1;
    }
    //Store the contents of the file in "line" string
    string line;
    //loop until the end of the text file 
    while(!my_file.eof()){
        //store the current line of the file in the "line" variable 
        getline(my_file,line);
        //print the line variable 
        cout<<line<<endl;
    }
    //close the file
    my_file.close();
    // Writing to the file
    ofstream my_file_out("example.txt", ios::app);
    // Check the file for errors
    if (!my_file_out) {
        cout << "Error: Unable to open the file for writing" << endl;
        return 1;
    }
    // The line to be added
    string new_line = "This is a new line added to the file.";
    // Write the new line to the file
    my_file_out << new_line << endl;
    // Close the file
    my_file_out.close();
    return 0;
}