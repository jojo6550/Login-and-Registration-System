#include <iostream>
#include <string>
using namespace std;
string encrypt(string password);
string login(string info[2]);
void draw();
void reg();
int main(){
    draw();
    reg();
    draw();
    return 0;
}

void reg(){
    string username, password;
    cout << "Enter username: ";
    getline(cin, username);
    cout << "Enter password using 8+ characters (e.g. p@SsW0$d): ";
    cin >> password;
     
    while(password.size() < 8){
        cout << "Password must be 8+ characters long."<<endl;
        cout << "Enter password using 8+ characters (e.g. p@SsW0$d): ";
        cin >> password;
    }
}

void draw(){
    cout<<"****************************************\n";
}