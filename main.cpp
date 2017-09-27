 /**
 * Lab 1
 * CS 250
 * 
 * @author Harish Palani
 * @version September 26, 2017
 */

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main() {
    string path;
    ifstream fileUtility;
    string contents[100];
    
    cout << "Enter the full path name for your input text file." << endl;
    cin >> path;
    
    int i = 0;
    fileUtility.open(path);
    while (!fileUtility.eof()) {
        fileUtility >> contents[i];
        i++;
    }
    
    fileUtility.close();
    
    for (int j = 0; j < 100; j++) {
        cout << contents[j] << endl;
    }
}