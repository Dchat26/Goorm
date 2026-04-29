#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include <cstdlib>

using namespace std;

long long evaluate(const string& expr) {
    vector<long long> stack; 

    const char* p = expr.c_str();
    char* next_p;

    long long num = strtoll(p, &next_p, 10);
    p = next_p;
    stack.push_back(num);

    while (*p != '\0') {
        char op = *p++;
        
        long long next_num = strtoll(p, &next_p, 10);
        p = next_p;

        if (op == '+') {
            stack.push_back(next_num);
        } else if (op == '-') {
            stack.push_back(-next_num);
        } else if (op == '*') {
            stack.back() *= next_num; 
        }
    }

    long long result = 0;
    for (const auto& val : stack) {
        result += val;
    }
    
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    if (cin >> a >> b) {
        long long resa = evaluate(a);
        long long resb = evaluate(b);
			
        cout << max(resa, resb) << "\n";
    }

    return 0;
}