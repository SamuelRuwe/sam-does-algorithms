/*
 * Given a string str containing alphanumeric characters. The task is to
 * calculate the sum of all the numbers present in the string.
*/

#include <iostream>
#include <sstream>
using namespace std;

int findSum(string str)
{
    int result = 0;
    stringstream ss;
    int found;
    string temp;
    for(int i = 0; i < str.length(); i++)
        str[i] = str[i] > 47 && str[i] < 58 ? str[i] : 32;
    ss << str;
    while(!ss.eof())
    {
        ss >> temp;
        if(stringstream(temp) >> found)
            result += found;
        temp = " ";
    }
    cout << result << endl;
    return result;
}

int findSumAttemptTwo(string str)
{
    int result = 0, i = 0;
    string temp = "";
    for(; i < str.length(); i++)
    {
        if(isdigit(str[i]))
            temp += str[i];
        else if (temp != "")
        {
            result += stoi(temp);
            temp = "";
        }
    }
    cout << result + stoi(temp) << endl;
    return result + stoi(temp);
}
int main()
{
    findSumAttemptTwo("a1b2c34");
    return 0;
}
