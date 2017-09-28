 /**
 * Lab 1
 * CS 250
 * 
 * Create a standard C++ program that prompts the user for the full path name of
 * an input text file. The program should open the input text file, make a list
 * of all words contained in the file, close the file, and then display the list
 * of words found in the file to the standard output. The list should be displayed
 * in alphabetical (ASCII) order, and each word should appear no more than one time 
 * in the list (i.e. eliminate duplicate entries).
 * 
 * @author Harish Palani
 * @version September 26, 2017
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string path;
    string temp;
    ifstream fileUtility;
    string contents[100];
    
    // Accept input file path.
    cout << "Enter input file name below." << endl;
    cin >> path;
    
    // Load array with unsorted input file contents.
    int c = 0;
    fileUtility.open(path);
    while (!fileUtility.eof()) {
        fileUtility >> contents[c];
        c++;
    }
    fileUtility.close();
    
    // Sort contents array in ASCII order.
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100 - i; j++) {
            if (contents[j] > contents[j+1]) {
                temp = contents[j];
                contents[j] = contents[j+1];
                contents[j+1] = temp;
            }
        }
    }
    
    // Eliminate duplicate entries
    TODO

    // Display results.
    for (int a = 0; a < 100; a++) {
        if (!contents[a].empty()) {
            cout << contents[a] << endl;
        }
    }
}