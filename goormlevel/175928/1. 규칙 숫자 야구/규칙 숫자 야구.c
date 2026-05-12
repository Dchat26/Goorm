#include <stdio.h>
#include <stdbool.h>

int main() {
    char t_str[5], g_str[5];
    if (scanf("%s %s", t_str, g_str) != 2) return 0;

    int target[4], guess[4];
    for (int i = 0; i < 4; i++) {
        target[i] = t_str[i] - '0';
        guess[i] = g_str[i] - '0';
    }

    int answer = 0;

    while (true) {
        answer++;

        int strikes[4], strike_cnt = 0;
        int balls[4], ball_cnt = 0;
        int fails[4], fail_cnt = 0;

        for (int i = 0; i < 4; i++) {
            if (guess[i] == target[i]) {
                strikes[strike_cnt++] = i;
            }
            else {
                bool is_ball = false;
                for (int j = 0; j < 4; j++) {
                    if (guess[i] == target[j]) {
                        is_ball = true;
                        break;
                    }
                }

                if (is_ball) {
                    balls[ball_cnt++] = i;
                }
                else {
                    fails[fail_cnt++] = i;
                }
            }
        }

        if (strike_cnt == 4) {
            printf("%d\n", answer);
            break;
        }

        for (int f = 0; f < fail_cnt; f++) {
            int num = fails[f];
            int val = guess[num];

            while (true) {
                val = (val + 1) % 10;

                bool is_duplicate = false;
                for (int i = 0; i < 4; i++) {
                    if (i != num && guess[i] == val) {
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

        if (ball_cnt > 0) {
            int non_strikes[4], ns_cnt = 0;

            for (int i = 0; i < 4; i++) {
                bool is_strike = false;
                for (int s = 0; s < strike_cnt; s++) {
                    if (strikes[s] == i) {
                        is_strike = true;
                        break;
                    }
                }

                if (!is_strike) {
                    non_strikes[ns_cnt++] = i;
                }
            }

            if (ns_cnt > 1) {
                int team_values[4];
                for (int i = 0; i < ns_cnt; i++) {
                    team_values[i] = guess[non_strikes[i]];
                }

                int rotated_values[4];
                rotated_values[0] = team_values[ns_cnt - 1];

                for (int i = 0; i < ns_cnt - 1; i++) {
                    rotated_values[i + 1] = team_values[i];
                }

                for (int i = 0; i < ns_cnt; i++) {
                    guess[non_strikes[i]] = rotated_values[i];
                }
            }
        }
    }

    return 0;
}