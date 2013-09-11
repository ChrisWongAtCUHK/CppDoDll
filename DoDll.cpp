#include <cstdio>
#include "DoDll.h"

__declspec(dllexport)int Add(int a, int b)
{
	return a+b;
}