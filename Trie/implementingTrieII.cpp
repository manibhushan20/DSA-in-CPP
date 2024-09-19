#include <iostream>
#include <vector>
class Node {
public:
    Node* links[26];
    int cntEndWith;
    int cntPrefix;
    Node() : cntEndWith(0), cntPrefix(0) {
        for (int i = 0; i < 26; ++i) {
            links[i] = nullptr;
        }
    }
    bool containsKey(char ch) {
        return (links[ch - 'a'] != nullptr);
    }
    void put(char ch, Node* node) {
        links[ch - 'a'] = node;
    }
    Node* get(char ch) {
        return links[ch - 'a'];
    }
    void increaseEnd() {
        cntEndWith++;
    }
    void increasePrefix() {
        cntPrefix++;
    }
    void deleteEnd() {
        cntEndWith--;
    }
    void reducePrefix() {
        cntPrefix--;
    }
    int getEnd() {
        return cntEndWith;
    }
    int getPrefix() {
        return cntPrefix;
    }
};
class Trie {
private:
    Node* root;
public:
    Trie() {
        root = new Node();
    }
    void insert(string word) {
        Node* node = root;
        for (char ch : word) {
            if (!node->containsKey(ch)) {
                node->put(ch, new Node());
            }
            node = node->get(ch);
            node->increasePrefix();
        }
        node->increaseEnd();
    }
    int countWordsEqualTo(string word) {
        Node* node = root;
        for (char ch : word) {
            if (node->containsKey(ch)) {
                node = node->get(ch);
            } else {
                return 0;
            }
        }
        return node->getEnd();
    }
    int countWordsStartingWith(string word) {
        Node* node = root;
        for (char ch : word) {
            if (node->containsKey(ch)) {
                node = node->get(ch);
            } else {
                return 0;
            }
        }
        return node->getPrefix();
    }
    void erase(string word) {
        Node* node = root;
        for (char ch : word) {
            if (node->containsKey(ch)) {
                node = node->get(ch);
                node->reducePrefix();
            } else {
                return;
            }
        }
        node->deleteEnd();
    }
};
int main() {
    Trie trie;
    trie.insert("apple");
    trie.insert("app");
    trie.insert("apricot");
    cout << "Words equal to 'app': " << trie.countWordsEqualTo("app") << endl;
    cout << "Words starting with 'ap': " << trie.countWordsStartingWith("ap") << endl;
    trie.erase("app");
    cout << "Words equal to 'app' after erase: " << trie.countWordsEqualTo("app") << endl;
    return 0;
}