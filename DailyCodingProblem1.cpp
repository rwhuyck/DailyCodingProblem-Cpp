#include <iostream>
#include <cstdlib>

using namespace std;

/*
Good morning! Here's your coding interview problem for today.

This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/

// Checks for addends of k in the input array and return true if the addends are found
string addendExists(int input[], int k, int len)
{
    int diff;
    string result = "false";

    for (int i = 0; i < len; i++)
    {
        if (k > input[i])
        {
            diff = k - input[i];
        }
        else
        {
            diff = input[i] - k;
        }

        for (int j = i + 1; j < len; j++)
        {
            if (diff == input[j])
            {
                result = "true";
                break;
            }
        }

        if (result == "true")
        {
            break;
        }
    }

    return result;
}


int main()
{
    int input[] = {10, 15, 3, 7};
    int k = 17;
    int len = sizeof(input) / sizeof(input[0]);
    string result;

    result = addendExists(input, k, len);

    cout << result;

    return 0;
}