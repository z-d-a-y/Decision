#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main() {
    int userinput;
    bool tester = false;
    while(!tester) {
    cout << "Pick one" << endl << "1.words" << endl << "2.numbers" << endl << "ENTER: ";
    cin >> userinput;
if (userinput == 1){
    char userinput;
    cout << "Pick one" << endl << "a" << endl << "b" << endl << "c" << endl << "ENTER: ";
    cin >> userinput;
    switch(userinput){
    case 'a':cout << "You have chosen word a.";break;
    case 'b':cout << "You have chosen word b.";break;
    case 'c':cout << "You have chosen word c.";break;
    default: cout << "\nError.\nCheck before you click enter.";break;   
    }}
else if (userinput == 2){
    int userinput;
    cout << "Pick one" << endl << "1" << endl << "2" << endl << "3" << endl << "ENTER: ";
    cin >> userinput;
    switch(userinput) {
    case 1:cout << "You have chosen number 1.";break;
    case 2:cout << "You have chosen number 2.";break;
    case 3:cout << "You have chosen number 3.";break;
    default: cout << "\nError.\nCheck before you click enter.";break; 
    }}
    else {
        printf("\nError. Try again.");
    }
}
    return 0;
}
