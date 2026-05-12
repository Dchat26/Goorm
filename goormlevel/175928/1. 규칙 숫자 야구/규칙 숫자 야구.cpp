#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> target;
    vector<int> guess;

    string t, g;
    if (!(cin >> t >> g)) return 0;

    for (const auto& c : t) target.push_back(c - '0');
    for (const auto& c : g) guess.push_back(c - '0');

    int answer = 0;
    while (true) {
        answer++;

        vector<int> strikes;
        vector<int> balls;
        vector<int> fails;

        for (int i = 0; i < 4; i++) {
            if (guess[i] == target[i]) {
                strikes.push_back(i);
            }
            else if (find(target.begin(), target.end(), guess[i]) != target.end()) {
                balls.push_back(i);
            }
            else {
                fails.push_back(i);
            }
        }

        if (strikes.size() == 4) {
            cout << answer << "\n";
            break;
        }

        for (const auto& num : fails) {
            int val = guess[num];
            
            while (true) {
                val = (val + 1) % 10;

                bool is_duplicate = false;
                for (int i = 0; i < 4; i++) {
                    if (num != i && guess[i] == val) {
                        is_duplicate = true;
                        break;
                    }
                }

                if (!is_duplicate) {
                    guess[num] = val;
                    break;
                }
            }
        }

        if (balls.size() > 0) {
            vector<int> non_strikes;
            
            for (int i = 0; i < 4; i++) {
                if (find(strikes.begin(), strikes.end(), i) == strikes.end()) {
                    non_strikes.push_back(i);
                }
            }

            if (non_strikes.size() > 1) {
                vector<int> team_values;
                for (const auto& num : non_strikes) {
                    team_values.push_back(guess[num]);
                }

                vector<int> rotated_values;
                rotated_values.push_back(team_values.back()); 
                
                for (int i = 0; i < team_values.size() - 1; i++) {
                    rotated_values.push_back(team_values[i]);
                }

                for (int i = 0; i < non_strikes.size(); i++) {
                    guess[non_strikes[i]] = rotated_values[i];
                }
            }
        }
    }

    return 0;
}