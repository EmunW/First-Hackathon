#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Created a rock, paper, scissors game using the Fibonacci sequence.
//The pattern becomes kinda recognizable after awhile.

int v1 = 1;
int v2 = 2;

int fib()       //Fibonacci sequence 1, 2, 3, 5, 8, 13, 21, 34...
{
    int s = v1+v2;
    if (s<=0) s = 1;
    v1 = v2;
    v2 = s;
}

int main()
{
    int count1 = 0; //User's score.
    int count2 = 0; //Computer's score.
    int draws = 0;

    cout << "Enter rock, paper, or scissors \n";
    string s;
    while (cin >> s){
        int x;
        if(s!="scissors" && s!="s"){
            if(s!="rock" && s!="r"){
                if(s!="paper" && s!="p"){
                    break;
                }
            }
        }
        if (s=="scissors" || s=="s"){
            x = 0;
            s = "scissors";
        }
        else if (s=="rock" || s=="r"){
            x = 1;
            s = "rock";
        }
        else if (s=="paper" || s=="p"){
            x = 2;
            s = "paper";
        }
        else cout << "Bad operator " << s << '\n';

        int xx = fib()%3;
        string ss;      //Computers play.
        switch(xx){
        case 0: ss = "scissors";
        break;
        case 1: ss = "rock";
        break;
        case 2: ss = "paper";
        break;
        }
        if (x==xx) {
            cout << "a draw!\n";
            draws++;
        }
        else {
            string res = "I win!";
            if (xx==0 && x==1){
                res = "You win!";
                count1++;
            }
            else if (xx==1 && x==2){
                res = "You win!";
                count1++;
            }
            else if (xx==2 && x==0){
                res = "You win!";
                count1++;
            }
            else
                count2++;
            cout << "You said \"" << s << "\" I said \"" << ss << "\": " << res;
            cout << " score: you==" << count1 << " me==" << count2 << " draws==" << draws << '\n';
        }
        cout << "Please try again: ";
    }
    cout << "Exit because of bad input\n";
    return 0;
}
