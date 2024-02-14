#include<iostream>
using namespace std;

char space[3][3]={{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char token = 'x';
bool tie = false;
string n1 = " ";
string n2 = " ";

void functionOne() {
    cout << "  |   |  \n";
    cout << " " << space[0][0] << "| " << space[0][1] << " | " << space[0][2] << "  \n";
    cout << "__|___|__ \n";
    cout << "  |   |  \n";
    cout << " " << space[1][0] << "| " << space[1][1] << " | " << space[1][2] << "  \n";
    cout << "__|___|__\n";
    cout << "  |   |  \n";
    cout << " " << space[2][0] << "| " << space[2][1] << " | " << space[2][2] << "  \n";
    cout << "  |   |  \n" << endl;
}

void functionTwo() {
    int digit;

    cout << ((token == 'x') ? n1 : n2) << ", please enter your move: ";
    cin >> digit;

    if (digit >= 1 && digit <= 9) {
        row = (digit - 1) / 3;
        column = (digit - 1) % 3;

        if (space[row][column] == 'x' || space[row][column] == 'o') {
            cout << "Invalid move! The cell is already taken." << endl;
            functionTwo();
        } else {
            space[row][column] = token;
            token = (token == 'x') ? 'o' : 'x';
        }
    } else {
        cout << "Invalid move! Enter a number between 1 and 9." << endl;
        functionTwo();
    }
}

bool functionThree() {
    for (int i = 0; i < 3; i++) {
        if ((space[i][0] == space[i][1] && space[i][1] == space[i][2]) || 
            (space[0][i] == space[1][i] && space[1][i] == space[2][i])) {
            return true;
        }
    }

    if ((space[0][0] == space[1][1] && space[1][1] == space[2][2]) || 
        (space[0][2] == space[1][1] && space[1][1] == space[2][0])) {
        return true;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'x' && space[i][j] != 'o') {
                return false;
            }
        }
    }

    tie = true;
    return true;
}

int main() {
    cout << "Enter the name of the first player: ";
    getline(cin, n1);
    cout << "Enter the name of the second player: ";
    getline(cin, n2);
    cout << n1 << " is player 1, so he/she will play 'x'.\n";
    cout << n2 << " is player 2, so he/she will play 'o'.\n";

    while (!functionThree()) {
        functionOne();
        functionTwo();
        functionThree();
    }

    functionOne();

    if (tie) {
        cout << "It's a tie!" << endl;
    } else {
        cout << ((token == 'x') ? n1 : n2) << " wins!" << endl;
    }

    return 0;
}
