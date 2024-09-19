#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Browser {
private:
    vector<vector<string>> tabs;  // Two tabs
    vector<int> historyIndex;      // Index to keep track of current page in each tab
    int currentTab;                // Current active tab

public:
    Browser() : tabs(2), historyIndex(2, -1), currentTab(0) {}

    void visit(string url) {
        // Clear forward history
        tabs[currentTab].resize(historyIndex[currentTab] + 1);
        tabs[currentTab].push_back(url);
        historyIndex[currentTab]++;
    }

    string go_back(int n) {
        int current_index = historyIndex[currentTab];
        int new_index = max(0, current_index - n);
        historyIndex[currentTab] = new_index;
        return tabs[currentTab][new_index];
    }

    string forward(int n) {
        int current_index = historyIndex[currentTab];
        int new_index = min((int)tabs[currentTab].size() - 1, current_index + n);
        historyIndex[currentTab] = new_index;
        return tabs[currentTab][new_index];
    }

    void changeTab() {
        currentTab = 1 - currentTab; // Toggle between 0 and 1
    }
};

int main() {
    Browser browser;
    browser.visit("https://www.example.com");
    browser.visit("https://www.openai.com");
    cout << browser.go_back(1) << endl; // Returns "https://www.example.com"
    browser.visit("https://www.github.com");
    cout << browser.forward(1) << endl;  // Returns "https://www.github.com"
    browser.changeTab();                 // Change to the other tab
    browser.visit("https://www.wikipedia.org");

    return 0;
}
