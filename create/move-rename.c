#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
int main(void)
{
    LPCSTR original_file = "C:\\Users\\Lenovo Owner\\OneDrive\\Desktop\\tmp.txt";
    LPCSTR new_file = "C:\\Users\\Lenovo Owner\\OneDrive\\Desktop\\tmptest\\new.txt";
    bool file_to_move = MoveFile(original_file, new_file);

    if (file_to_move == false)
    {
        printf("[-] Failed to move file%u\n",GetLastError());
        return 1;
    }
    printf("[+] Success message\n");
}
