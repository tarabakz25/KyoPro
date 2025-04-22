#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REP2(i, a, n) for (ll i = a; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)

void printList(char *S) {
    cout << "初期リスト: ";
    REP(i, strlen(S)) {
        cout << S[i] << " -> ";
    }
    cout << "NULL" << endl;
}

void delete_node(char *S, char c) {
    REP(i, strlen(S)) {
        if (S[i] == c) {
            REP2(j, i, strlen(S)) {
                S[j] = S[j + 1];
            }
            break;
        }
    }

    cout << "削除後: ";
    REP(i, strlen(S)) {
        cout << S[i] << " -> ";
    }
    cout << "NULL" << endl;
}

int main() {
    char S[7] = {'N', 'a', 'r', 'u', 't', 'o'};

    printList(S);

    char c;

    cout << "削除する文字: ";
    cin >> c;

    delete_node(S, c);
    return 0;
}