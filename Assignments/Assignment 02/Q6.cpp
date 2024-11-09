// Secure Login System with Multi-Layer Authentication
#include<iostream>
using namespace std;
int main(){
    int userName, password, OTP,userOTP, originalUserName,originalPass;
    bool failedAttempts = true;
    originalUserName = 105789;
    originalPass = 100348;
    cout << "Your user name is: " << originalUserName << endl;
    cout << "Your password is: "<< originalPass << endl;
    cout << endl;
    cout << "Enter User Name : ";
    cin >> userName;
    if(cin.fail() || userName < 0){
        cout << "Invalid user name. Must be a +ve integer " << endl;
        return 1;
    }
    cout << "Password :";
    cin >> password;
    if(cin.fail() || password < 0){
        cout << "Invalid password." << endl;
        return 1;
    }
    if(userName != originalUserName || password != originalPass){
        cout << "\n******Invalid user-name or password******"<< endl;
        failedAttempts = false;
        return 0;
    }
    else{
        srand(time(0));
        OTP = rand() % 10000; //Generating a 4-digit otp
        cout << endl;
        cout << "Your OTP is: " << OTP << endl;
        cout << endl;
        cout << "Plz enter your OTP: ";
        cin >> userOTP;
        if(userOTP == OTP){
            cout<< "OTP verified!" << endl;
            cout << "You have successfully loged into your account" << endl;
            return 0;
        }
        else{
            cout << "Wrong OTP!"<< endl;
            failedAttempts = false;
            return 0;
        }
    }
    if(!failedAttempts){
        cout << "Sorry, You can't login into your account for current session." << endl;
    }
    return 0;
}