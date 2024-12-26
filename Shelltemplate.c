#include "Windows.h"

int main()
{
	unsigned char shellcode[] =
		"shellcode here";

	void* exec = VirtualAlloc(0, sizeof shellcode, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	if (exec != 0) {
		memcpy(exec, shellcode, sizeof shellcode);
		((void(*)())exec)();
	}
	return -1;
}
