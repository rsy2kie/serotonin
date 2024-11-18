#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int tahun_lahir;
    string username, usernamelog;
    int password, passwordlog;
        cout << " ++++ " << "REGISTRASI" << " ++++ " <<endl;
    cout << "Username\t :";
    cin >> username;
    cout << "PIN     \t :";
    cin >> password;
    cout << "Tahun Lahir\t :";
    cin >> tahun_lahir;

    cout <<endl << " ++++ " << "LOGIN" << " ++++ " <<endl;
    cout << "Username\t :";
    cin >> usernamelog;
    cout << "PIN     \t :";
    cin >> passwordlog;

    if (username == usernamelog && password == passwordlog ) {

        cout << "LOGIN BERHASIL" <<endl;
        cout << "Username\t :" << username <<endl;

     if ( tahun_lahir % 4 == 0) {

            cout << tahun_lahir << " merupakan tahun kabisat" <<endl;
        } else {
            cout << tahun_lahir << " bukan tahun kabisat" <<endl;
        } }
    
    else if ( username == usernamelog && password != passwordlog ) {

 
        cout << "PASSWORD SALAH !"  <<endl;
    }
    else if ( username != usernamelog && password == passwordlog) {

        cout << "USERNAME SALAH !"  <<endl;
    }
    else {
        cout << "SEMUANYA SALAH BROK" <<endl;
    }
}






