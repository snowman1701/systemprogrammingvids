#include <stdio.h>
#include <windows.h>
#include <stdbool.h>

int main(void)
{
    LPCSTR dir_name = "C:\\Users\\Lenovo Owner\\OneDrive\\Desktop\\testdirfromcfolder";
    bool new_directory = CreateDirectory(dir_name, NULL);
    if (new_directory == false)
    {
        printf("Directory creation failed. Error number: %u\n", GetLastError());
        return 1;
    }
    printf("[+] Directory created successfully\n");

    bool delete_directory = RemoveDirectory(dir_name);

    if (delete_directory == false)
    {
        printf("[-] Failed to remove directory %u\n", GetLastError());
    }
    printf("[+ Directory removed successfully]\n");
    system("PAUSE");
    return 0;
}

