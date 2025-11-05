#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T = 0;
    cin >> T;
    vector<char> choice(T);
    vector<int> h(T);
    vector<int> w(T);

    for (int i = 0; i < T; ++i) {
        cin >> choice[i] >> h[i] >> w[i];
    }
    for(int i=0;i<T;i++){
    if (choice[i] == 'a') {
            int k = 2 * h[i] + 1;
            int hh = h[i];
            for (; hh > 0; hh--) {
                for (int n = hh - 1; n > 0; n--) {
                    cout << " ";
                }
                for (int m = 0; m < k - 2 * hh; m++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (choice[i] == 'b') {
            int hh = h[i], ww = w[i];
            for (; hh > 0; hh--) {
                for (int j = 0; j < ww; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (choice[i] == 'c') {
            int hh = h[i], ww = w[i];
            for (; hh > 0; hh--) {
                for (int n = hh - 1; n > 0; n--) {
                    cout << " ";
                }
                for (int j = 0; j < ww; j++) {
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
    return 0;
}