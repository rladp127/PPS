#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int count = 0;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            count++;
        else if (s[i] == 'y' || s[i] == 'Y')
            count--;
    }
    
    return count == 0;
}