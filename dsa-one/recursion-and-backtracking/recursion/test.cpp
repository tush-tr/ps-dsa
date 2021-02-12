// HackerRank Question - Recursive Digit Sum
#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
string concate(string s,int k){
    string p;
    for(int i=0;i<k;i++){
        p += s;
    }
    return p;
}
int stringToInt(string s){
    int a = 0;
    for(int i=0;i<s.size();i++){
        a = a*10 + s[i]-'0';
    }    
    return a;
}
string stringSum(string s){
    int res = 0;
    for(int i=0;i<s.size();i++){
        res += s[i]-'0';
    }
    string a = to_string(res);
    return a;
}
// Complete the superDigit function below.
int superDigit(string n, int k) {
    string p = concate(n,k);
    if(p.size()==1 && k==1){
        return stringToInt(n);
    }    
    return superDigit(stringSum(p),1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    string n = nk[0];

    int k = stoi(nk[1]);

    int result = superDigit(n, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
