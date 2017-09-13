#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

DWORD WINAPI hilo(LPVOID LPARAM);


int main()
{
	HANDLE MiHilo;
	DWORD  IdDelHilo;
	
	MiHilo=CreateThread(NULL,0,hilo,NULL,0,& IdDelHilo);
	for (int t=0;t<10;t++){
		system("CLS");
		cout << t;
		Sleep(1000);
	}/*
	return 0;
	MessageBox(NULL,"2","ventana",MB_OK);
	
	return 0;*/
}

DWORD WINAPI hilo(LPVOID LPARAM)
{
	char b;
	for (int i=0;i<5;i++){
		cin >> b;
		cout << i;
	}
	//MessageBox(NULL,"1","ventana",MB_OK);
	
}
