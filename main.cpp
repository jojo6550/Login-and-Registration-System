#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string encrypt(string password);
string login(string info[2]);
void draw();
void reg();
int main(){
    reg();

    return 0;
}

string ecrypt(string password){
    string newPassword = "";
    for(char c: password){
        newPassword += c + 2;
    }
    cout << newPassword <<endl;
    return newPassword;
}

void reg(){
    string username, password, verifyPassword;
    cout << "Enter username: ";
    getline(cin, username);
    cout << "Enter password using 8+ characters (e.g. p@SsW0$d): ";
    cin >> password;
    cout << "Enter password to verify: ";
    cin >> verifyPassword;
     
    while(password.size() < 8){
        cout<<"Password was too short."<<endl;
        cout << "Enter password using 8+ characters (e.g. p@SsW0$d): ";
        cin >> password;
        cout << "Enter password to verify: ";
        cin >> verifyPassword;
    }
    while(password != verifyPassword){
        cout<<"Passwords do not match."<<endl;
        cout << "Enter password using 8+ characters (e.g. p@SsW0$d): ";
        cin >> password;
        cout << "Enter password to verify: ";
        cin >> verifyPassword;
    }

    cout << ecrypt(password);
    ifstream infile("database.txt");
    string line;
    while(getline(infile, line)){
        if(line.find(username) + ":" == 0){
            cout<<"User exists. Try again."<<endl;
            infile.close();
            return;
        }
    }
    infile.close();
}