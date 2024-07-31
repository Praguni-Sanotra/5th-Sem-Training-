#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;
// Function to generate a random OTP of given length
string generateOTP(int length) {
    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    string otp = "";
    
    for (int i = 0; i < length; ++i) {
        int index = rand() % characters.length(); // Generate a random index
        otp += characters[index]; // Append the character at the random index to the OTP
    }
    
    return otp;
}


int main() {
    srand(time(0)); // Seed the random number generator with the current time
    int otpLength;
    cout << "Enter the length of the OTP: ";
    cin >> otpLength;


    // Generate and display the OTP
    string otp = generateOTP(otpLength);
    cout << "Generated OTP: " << otp << endl;


    return 0;
}
