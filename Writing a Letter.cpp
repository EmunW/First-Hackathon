#include <iostream>
#include <string>
#include <vector>

//Writing a letter to someone.

using namespace std;

int main()
{
    cout << "Enter the name of the person you want to write to." << '\n';
    string first_name;
    cin >> first_name;
    string friend_name;
    cout << "Enter the name of a friend" << '\n';
    cin >> friend_name;
    char friend_sex = '0';
    cout << "Is " << friend_name << "male or female? Enter m for male or f for female." << '\n';
    cin >> friend_sex;
    cout << "How old are you?" << '\n';
    int age = 0;
    cin >> age;
    string error = "You're kidding!";
    if(age > 110 or age < 0) cout << error << '\n';
    cout << "Dear " << first_name << '\n'
    << "    How are you? I'm practicing how to draw and code a bit. Honestly, it's pretty rough because I keep getting distracted and losing motivation. Have you seen " << friend_name << "lately?";
    if(friend_sex = 'f') cout << " If you see " << friend_name << " please tell her to call me.";
    if(friend_sex = 'm') cout << " If you see " << friend_name << " please tell him to call me.";
    cout << " Also, I've heard you're now " << age << " years old!";
    if(age < 12) cout << " Next year you will be " << age + 1 << '.';
    if(age == 17) cout << " Next year you will be able to vote.";
    if(age > 70) cout << " I hope you're enjoying retirement.";
    cout << "Sincerely yours," << '\n' << '\n';
    cout << "Edmund Wong";
}
