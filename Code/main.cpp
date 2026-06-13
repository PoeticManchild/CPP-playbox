#include <iostream>
#include <string>
using namespace std;

void print(const string& s) {
    cout << s;
}


int main() {
    while (true) {
        string name;
        print("\nENTER YOUR NEW PASSWORD: ");
        getline(cin, name);
        if (name == "PP") {
            print("Passsword is too small!\n");
            break;
        } else if (name == "SHREK") {
            print("Shrek is Love. Shrek is life!\n");
            break;
        } else {
            print("That password is stoopid, try again!");
        }
    }
    print("YOUR PASSWORD HAS BEEN ACCEPTED!");
    return 0;
}