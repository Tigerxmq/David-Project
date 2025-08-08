#pragma once

#include "main.h"

string a="abs";

ll tranfer(string s)
{
    int temp=0;
    for(int i=0; i < s.length(); i++)
    {
        if(s[i] >= '0'&&s[i] <= '9')
        {
            temp+=(s[i] - 48)*pow(10,(s.length()-i-1));
        }
        else return -1;
    }
    return temp;
} 

void menu()
{
    string temp;
    cin >> temp;
    cout << tranfer(temp);
}