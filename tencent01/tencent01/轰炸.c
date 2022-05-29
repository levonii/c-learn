
#include<stdio.h>
#include<Windows.h>
int main()
{
	HWND hwnd=FindWindow(NULL,L"aaa");
	for (int i = 0; i < 100; i++)
	{
		SendMessage(hwnd, WM_PASTE, 0, 0);
		SendMessage(hwnd,WM_KEYDOWN,VK_RETURN ,0, 0);
	}
	return 0;
}
