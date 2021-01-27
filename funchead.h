#pragma once
#include <tuple>

//header file containing function declarations.

void output(int a);
void output(char a);
void output(float a);
void output(char a[]);
void output(char a[], float b);
int factorial(int a);

std::tuple<int, int> input();
