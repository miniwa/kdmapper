#pragma once
#include <Windows.h>

typedef struct _SVKE_DRIVER_ARGS {
	SIZE_T sizeOfStruct;
	PVOID pImageBase;
	PVOID pVulnerableDriverObject;
} SVKE_DRIVER_ARGS;
