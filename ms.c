unsigned char buf[] = 
"shellcode is here";
main()
{
	( (void(*)(void))&buf)();
}
