#include <iostream>
#include <vector>
#include <array>

using namespace std;

class ATM {
private:
    array<int, 6> notes; // Stores the count of notes for each denomination

public:
    ATM() {
        notes.fill(0); // Initialize all note counts to zero
    }

    void deposit(const array<int, 6>& denomination) {
        for (int i = 0; i < 6; ++i) {
            notes[i] += denomination[i]; // Add deposited notes to the ATM
        }
    }

    vector<int> withdraw(int amount) {
        vector<int> result(6, 0); // Initialize the result vector with zeros

        // Calculate the number of notes to withdraw for each denomination
        for (int i = 5; i >= 0; --i) {
            result[i] = min(amount / (i + 1), notes[i]); // Withdraw maximum available notes
            amount -= result[i] * (i + 1);
        }

        // If the amount is not completely withdrawn, return [-1]
        if (amount > 0) {
            return {-1};
        }

        // Update the count of notes in the ATM after withdrawing
        for (int i = 0; i < 6; ++i) {
            notes[i] -= result[i];
        }

        return result;
    }
};

int main() {
    ATM atm;

    // Deposit notes of denominations [10, 20, 50, 100, 200, 500]
    atm.deposit({10, 5, 3, 2, 1, 1});

    // Withdraw 300 rupees
    vector<int> withdraw_result = atm.withdraw(300);
    if (withdraw_result[0] == -1) {
        cout << "Cannot withdraw 300 rupees." << endl;
    } else {
        cout << "Withdrawal successful:" << endl;
        cout << "Denominations: [";
        for (int i = 0; i < 6; ++i) {
            cout << withdraw_result[i];
            if (i < 5) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
