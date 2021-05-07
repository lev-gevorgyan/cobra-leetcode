//
// Created by User on 5/7/2021.
//

#include "leet_278.h"

int firstBadVersion(int n) {
    long int low = 1;
    long int high = n;
    long int mid;
    long int result = n;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (/*isBadVersion(mid)*/true /*(or false)*/) // isBadVersion is defined function
        {
            result = mid;
            high = mid - 1;
        }
                else
            low = mid + 1;
    }
    return result;
}