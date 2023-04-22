// CSCI 1300 Spring 2023
//Author: Jeremiah Heredia
//Recitation: 102- Tuan Tran
// Homework 8 Problem 1

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
int sumDigits(int N)
{
    if (N <10)
    {
        return N;
    }
    else 
    {
        return N % 10 + sumDigits(N/10);
    }
}
int digitsSuperSumRecursive(int N)
{
    if(N < 10)
    {
        return N;
    }
    else 
    {
        return digitsSuperSumRecursive(sumDigits(N));
    }
}
