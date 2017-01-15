// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int a = 5;
int b = 5;
int c;
int funcrion();
int main()
{
	funcrion();
	c = a;
	return c;
	}

int funcrion()
{
	a = b--;

	return b--;
}