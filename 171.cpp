#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;

int main() {
    // File handling variables
    ifstream input_file("example.txt");
    ofstream output_file("example.txt", ios::app);

    // Check if files open successfully
    if (!input_file) {
        cout << "Error: Unable to open the file for reading." << endl;
        return 1;
    }
    if (!output_file) {
        cout << "Error: Unable to open the file for appending." << endl;
        return 1;
    }

    // Variables to calculate sum and average
    string line;
    int sum = 0, count = 0;
    int marks;

    // Read existing contents to calculate sum and average
    while (getline(input_file, line)) {
        stringstream ss(line);
        string name;
        ss >> name >> marks;
        if (ss) {
            sum += marks;
            count++;
        }
    }
    input_file.close(); // Close the input file after reading

    // Calculate average
    double average = count == 0 ? 0 : static_cast<double>(sum) / count;

    // Append results to the file
    output_file << "Sum of marks: " << sum << endl;
    output_file << "Average of marks: " << average << endl;

    // Close the output file
    output_file.close();

    return 0;
}
