//
// Created by User on 5/7/2021.
//

#include "leet_08.h"


int myAtoi(std::string str)
{
    if(str == "")
        return 0;
    int i = 0;
    long long res = 0;
    while(str[i] != '\0' && str[i] == ' ')
    {
        i++;
    }
    int flag = 1;
    if(str[i] == '-')
    {
        flag = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while(str[i] != '\0')
    {
        if(str[i] >= '0' &&str[i] <= '9')
        {
            res = res*10 + str[i] - '0';
            if(res > INT_MAX)
            {
                if(flag == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }
            i++;
        }
        else break;
    }
    res = flag * res;
    return static_cast<int>(res);
}