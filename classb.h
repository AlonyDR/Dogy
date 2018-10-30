#include "stdafx.h"
#include <windows.h>

class bdbd
{
private:
	int DIV; 
	int WIDTH;
	MEMORYSTATUSEX statex;
public:
	bdbd()
	{
		DIV = 1048576;
		WIDTH = 7;
	}
	void one()
	{
		  statex.dwLength = sizeof (statex);

		  GlobalMemoryStatusEx (&statex);
		  _tprintf (TEXT("There is  %*ld percent of memory in use.\n"),WIDTH, statex.dwMemoryLoad);
		  _tprintf (TEXT("There are %*I64d total Mbytes of physical memory.\n"),WIDTH,statex.ullTotalPhys/DIV);
		  _tprintf (TEXT("There are %*I64d free Mbytes of physical memory.\n"),WIDTH, statex.ullAvailPhys/DIV);
		  _tprintf (TEXT("There are %*I64d total Mbytes of paging file.\n"),WIDTH, statex.ullTotalPageFile/DIV);
		  _tprintf (TEXT("There are %*I64d free Mbytes of paging file.\n"),WIDTH, statex.ullAvailPageFile/DIV);
		  _tprintf (TEXT("There are %*I64d total Mbytes of virtual memory.\n"),WIDTH, statex.ullTotalVirtual/DIV);
		  _tprintf (TEXT("There are %*I64d free Mbytes of virtual memory.\n"),WIDTH, statex.ullAvailVirtual/DIV);
		  _tprintf (TEXT("There are %*I64d free Mbytes of extended memory.\n"),WIDTH, statex.ullAvailExtendedVirtual/DIV);
	}
	void dwa()
	{
		  for(int i=0;i<10;i++)
		  {
			  system("cls");
				GlobalMemoryStatusEx (&statex);
			  _tprintf (TEXT("There is  %*ld percent of memory in use.\n"),WIDTH, statex.dwMemoryLoad);
			  _tprintf (TEXT("There are %*I64d total Mbytes of physical memory.\n"),WIDTH,statex.ullTotalPhys/DIV);
			  _tprintf (TEXT("There are %*I64d free Mbytes of physical memory.\n"),WIDTH, statex.ullAvailPhys/DIV);
			  _tprintf (TEXT("There are %*I64d total Mbytes of paging file.\n"),WIDTH, statex.ullTotalPageFile/DIV);
			  _tprintf (TEXT("There are %*I64d free Mbytes of paging file.\n"),WIDTH, statex.ullAvailPageFile/DIV);
			  _tprintf (TEXT("There are %*I64d total Mbytes of virtual memory.\n"),WIDTH, statex.ullTotalVirtual/DIV);
			  _tprintf (TEXT("There are %*I64d free Mbytes of virtual memory.\n"),WIDTH, statex.ullAvailVirtual/DIV);
			  _tprintf (TEXT("There are %*I64d free Mbytes of extended memory.\n"),WIDTH, statex.ullAvailExtendedVirtual/DIV);
			  Sleep(2000);
		  }
	}


	
};