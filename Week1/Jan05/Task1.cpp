/* Timur loves codeforces. That's why he has a string s
 having length 10 made containing only lowercase Latin letters. Timur wants to know how many indices string s
 differs from the string "codeforces".
Link : https://codeforces.com/contest/1829/problem/A  (CF - Love Story)
*/

// Submitted on 05/01/2024

/*  Time Complexity : constant
    Space Complexity : constant */

#include<iostream>

using namespace std;

int main()
{
    int num_of_inputs;
    cin >> num_of_inputs;
    while(num_of_inputs > 0)
    {
        string s1 = "codeforces";
        string s2;
        cin >> s2;
        int differ = 0;
        for(int i=0; i<10; i++)
        {
            if(s1[i] != s2[i])
                differ++;
        }
        cout << differ << endl;
        num_of_inputs --;
    }
}