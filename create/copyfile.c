#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main()
{
    LPCSTR old_file = "C:\\Users\\Lenovo Owner\\OneDrive\\Desktop\\old.txt";
    LPCSTR new_file = "C:\\Users\\Lenovo Owner\\OneDrive\\Desktop\\new.txt";
    bool copied_file = CopyFile(old_file, new_file, TRUE);
    if (copied_file == false)
    {
        printf("[-] Failed to copy file. Error number %u:\n", GetLastError());
        return 1;
    }

    printf("[+] file successfully copied");
    return 0;

}
