#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Class for subject pointer
class SubjectPointer {
private:
    struct WordPage {
        string word;
        vector<int> pageNumbers;
    };

    vector<WordPage> pointer;

public:
    // Add word and page number to the pointer
    void addWord(const string& word, int pageNumber) {
        bool found = false;
        // Check if the word already exists in the pointer
        for (auto& item : pointer) {
            if (item.word == word) {
                item.pageNumbers.push_back(pageNumber);
                found = true;
                break;
            }
        }
        // If the word doesn't exist yet, add it along with the page number
        if (!found) {
            WordPage newWordPage;
            newWordPage.word = word;
            newWordPage.pageNumbers.push_back(pageNumber);
            pointer.push_back(newWordPage);
        }
    }

    // Remove word from the pointer
    void removeWord(const string& word) {
        for (auto it = pointer.begin(); it != pointer.end(); ++it) {
            if (it->word == word) {
                pointer.erase(it);
                break;
            }
        }
    }

    // Print page numbers for the specified word
    void printPagesForWord(const string& word) {
        for (const auto& item : pointer) {
            if (item.word == word) {
                cout << "Word \"" << word << "\" is found on pages: ";
                for (int pageNumber : item.pageNumbers) {
                    cout << pageNumber << " ";
                }
                cout << endl;
                return;
            }
        }
        cout << "Word \"" << word << "\" is not found in the pointer." << endl;
    }

    // Print the entire pointer
    void printPointer() {
        cout << "Pointer:" << endl;
        for (const auto& item : pointer) {
            cout << item.word << ": ";
            for (int pageNumber : item.pageNumbers) {
                cout << pageNumber << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    SubjectPointer pointer;

    int choice;
    do {
        cout << "\nChoose an option:" << endl;
        cout << "1. Add word and page number" << endl;
        cout << "2. Remove word" << endl;
        cout << "3. Print page numbers for a word" << endl;
        cout << "4. Print the entire pointer" << endl;
        cout << "5. Exit" << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string word;
            int pageNumber;
            cout << "Enter the word: ";
            cin >> word;
            cout << "Enter the page number: ";
            cin >> pageNumber;
            pointer.addWord(word, pageNumber);
            break;
        }
        case 2: {
            string word;
            cout << "Enter the word to remove: ";
            cin >> word;
            pointer.removeWord(word);
            break;
        }
        case 3: {
            string word;
            cout << "Enter the word: ";
            cin >> word;
            pointer.printPagesForWord(word);
            break;
        }
        case 4:
            pointer.printPointer();
            break;
        case 5:
            cout << "Program exited." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
