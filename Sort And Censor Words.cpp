#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//Sorts and censors words.

int main()
{
    vector <string> words; //Program to censor words.
    cout << "Enter some words and press Ctrl+z when finished. \n";
    string dict;
    while (cin >> dict)
        words.push_back(dict);
    cout << "Number of words: " << words.size() << '\n';
    sort(words.begin(),words.end());
    for (int i=0; i<words.size(); i++)
        if (i==0 || words[i-1] != words[i])     //|| means or.
            if (words[i] == "fuck" || words[i] == "shit")
                cout << "BLEEP" << '\n';
            else
                cout << words[i] << '\n';
    return 0;
}
