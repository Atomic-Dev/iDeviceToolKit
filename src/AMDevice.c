#include <stdio.h>
#include <io.h>
#include "AMDevice.h"
#include <windows.h>

int AMDeviceEnterRecovery(void) {   
    #ifdef _WIN32
           system("cd bin && dllmanager");
    #endif
}


