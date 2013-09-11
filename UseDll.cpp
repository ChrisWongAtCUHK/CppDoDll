#include <cstdio>
#include <windows.h>
#include "UseDll.h"

int main(int argc, char *argv[]){
	HINSTANCE handler = LoadLibrary(".\\DoDll.dll");			// load the library
	if(handler == NULL){										// check if the library being loaded successfully
		printf("Load Dll Error\n");
		system("pause");
	}
	
	fpAdd fcAdd = (fpAdd)GetProcAddress(handler, "Add");		// load the function
	if(fcAdd == NULL){											// check if the function being loaded successfully
		printf("Load Function Error\n");
		system("pause");
	}
	
	int value = 0;

	value = fcAdd(5, 2);										// call function

	printf("value = %d\n", value);
	system("pause");

	return 0;
}