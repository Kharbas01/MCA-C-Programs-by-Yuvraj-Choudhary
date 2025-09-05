#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Player {
    string name;
    int runs;

public:
    void player_creation(string name) {
        this->name = name;
        this->runs = 0;
    }

    int bat() {
        int score = rand() % 7;  // 0-6
        runs += score;
        return score;
    }

    string get_name() {
        return name;
    }

    int get_runs() {
        return runs;
    }
};

int main() {
    srand(time(0)); 

    Player player1, player2;
    string player1_name, player2_name;

    cout << "Enter the name of Player 1: ";
    cin >> player1_name;
    cout << "Enter the name of Player 2: ";
    cin >> player2_name;

    player1.player_creation(player1_name);
    player2.player_creation(player2_name);

    int balls = 6; 


    for (int i = 0; i < balls; i++) {
        int score = player1.bat();
        cout << player1.get_name() << " scored " << score << " runs.\n";
        if (score == 4 || score == 6) {
            cout << "Whooray!!!!!!"<<endl;;
            break;
        }
    }
    cout << player1.get_name() << "'s total runs: " << player1.get_runs() << endl;

    cout<<endl;

    for (int i = 0; i < balls; i++) {
        int score = player2.bat();
        cout << player2.get_name() << " scored " << score << " runs"<<endl;
        if (score == 4 || score == 6) {
            cout << "Whooray!!!!!!";
            break;
        }
    }
    cout << player2.get_name() << "'s total runs: " << player2.get_runs() << endl;
    
    cout<<endl;

    if (player1.get_runs() > player2.get_runs()) {
        cout << player1.get_name() << " Wins the Match";
    } else if (player2.get_runs() > player1.get_runs()) {
        cout << player2.get_name() << " Wins the Match";
    } else {
        cout << "It's a Tie!";
    }

    return 0;
}
