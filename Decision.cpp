#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int userinput;
    bool valid = false;
    cout << "Pick one" << endl << "1.words" << endl << "2.numbers" << endl << "ENTER: ";
    cin >> userinput;
if (userinput == 1){
    char userinput;
    cout << "\nPick one" << endl << "a" << endl << "b" << endl << "c" << endl << "ENTER: ";
    cin >> userinput;
    while(!valid) {
    switch(userinput){
    case 'a':cout << "You have chosen word a.";valid = true;break;
    case 'b':cout << "You have chosen word b.";valid = true;break;
    case 'c':cout << "You have chosen word c.";valid = true;break;
    default: 
    cout << "\nError. Check before you enter.\n";
    cout << "\nPick one" << endl << "a" << endl << "b" << endl << "c" << endl << "ENTER: ";
    cin >> userinput;
    break;
    }
}
}
else if (userinput == 2){
    int userinputnum;
    bool validnum = false;
    cout << "\nPick one" << endl << "1" << endl << "2" << endl << "3" << endl << "ENTER: ";
    cin >> userinputnum;
    while(!validnum) {
    switch(userinputnum) {
    case 1:cout << "You have chosen number 1.";validnum = true;break;
    case 2:cout << "You have chosen number 2.";validnum = true;break;
    case 3:cout << "You have chosen number 3.";validnum = true;break;
    default: 
    cout << "\nError. Check before you enter.\n";
    cout << "\nPick one" << endl << "1" << endl << "2" << endl << "3" << endl << "ENTER: ";
    cin >> userinputnum;
    break;
    }
}
}
    else {
        printf("Error. Try again.\n");
    }

    return 0;
    
}
