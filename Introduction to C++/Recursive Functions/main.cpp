#include <Windows.h>
#include <iostream>
#include <string>

void main(){
       HANDLE hFind;
       WIN32_FIND_DATAA data;

       hFind = FindFirstFileA("D:\\Users\\Sam\\Documents\\My Games\\*", &data);
       if (hFind != INVALID_HANDLE_VALUE) {
              do {
                     std::cout << data.cFileName << std::endl; 
              } while (FindNextFileA(hFind, &data));
              FindClose(hFind);
       }
}