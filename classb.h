#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class bdbd
{
private:
	int MB; 
	int WIDTH;
	MEMORYSTATUSEX statex;
	int inf[8];
	static DWORD WINAPI S_Run(LPVOID p)
		{
		  return ((bdbd*)p)->Run();
		}
		DWORD Run()
		{
			tri();
			return 0;
		}
public:
	bdbd()
	{
		MB = 1048576;
	}
	void one()
	{
		  statex.dwLength = sizeof (statex);
		  GlobalMemoryStatusEx (&statex);

		  inf[0]=statex.dwMemoryLoad;
		  inf[1]=statex.ullTotalPhys/MB;
		  inf[2]=statex.ullAvailPhys/MB;
		  inf[3]=statex.ullTotalPageFile/MB;
		  inf[4]=statex.ullAvailPageFile/MB;
		  inf[5]=statex.ullTotalVirtual/MB;
		  inf[6]=statex.ullAvailVirtual/MB;
		  inf[7]=statex.ullAvailExtendedVirtual/MB;
	}
	void dwa()
	{
		wcout<<"There is  percent of memory in use "<<inf[0]<<endl;
		wcout<<"There are total Mbytes of physical memory "<<inf[1]<<endl;
		wcout<<"There are free Mbytes of physical memory "<<inf[2]<<endl;
		wcout<<"There are total Mbytes of paging file "<<inf[3]<<endl;
		wcout<<"There are free Mbytes of paging file "<<inf[4]<<endl;
		wcout<<"There are total Mbytes of virtual memory "<<inf[5]<<endl;
		wcout<<"There are free Mbytes of virtual memory "<<inf[6]<<endl;
		wcout<<"There are free Mbytes of extended memory "<<inf[7]<<endl;
	}
	void tri()
	{
		  for(;;)
		  {
			  system("cls");
			  one();
			  dwa();
			  Sleep(1000);
		  }
	}
	void chet()
	{
		DWORD id = 0;
		HANDLE h = CreateThread(NULL, 0, S_Run, this, 0, &id);
		WaitForSingleObject(h,INFINITE);
		CloseHandle(h);

	}


	
};