#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
   int H[26];
    for(int i = 0; i < 26; ++i)
       cin >> H[i];

    string word;
    cin >> word;
    
    int big_h = 0;
    for(char i : word)
        if(H[(int)i-97] > big_h) big_h = H[(int)i-97];
    
    cout << big_h * word.size() << endl;
    
    return 0;
}