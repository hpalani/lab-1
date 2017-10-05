 /*
 NAME: Harish Palani
 CRN: 41600
 ASSIGNMENT: Lab 1
 SOURCES: stackoverflow.com
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string path;
    string temp;
    ifstream fileUtility;
    string contents[128];
    
    // Accept input file path.
    cout << "Enter input file name below." 
         << endl;
    cin >> path;
    
    // Load array with unsorted input file contents.
    int size = 0;
    fileUtility.open(path);
    while (!fileUtility.eof()) {
        fileUtility >> contents[size];
        size++;
    }
    fileUtility.close();
    
    // Sort contents array in ASCII order.
    for (int g = 0; g < size; g++) {
        for (int h = 0; h < size - g; h++) {
            if (contents[h] > contents[h + 1]) {
                temp = contents[h];
                contents[h] = contents[h + 1];
                contents[h + 1] = temp;
            }
        }
    }
    
    // Eliminate duplicate entries.
    int i = 0;
    while (i < size) {
        int j = i + 1;
        if (contents[i] == contents[j]) {
            for (int k = i; k < size; k++) {
                contents[k] = contents[k + 1];
            }
            size--;
        } else {
            i++;
        }
    }

    // Display results.
    for (int l = 0; l < size; l++) {
        if (!contents[l].empty()) {
            cout << contents[l] << endl;
        }
    }
}