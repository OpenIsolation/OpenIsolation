/**
 * The OpenIsolation Project
 */

#include "W64/CADebug.h"

#include <cstdio>
#include <Windows.h>
#include <psapi.h>

bool CA::running_in_debugger() {
    return IsDebuggerPresent() != false;
}

template <typename... Args>
void CA::message_txt(const char* format, Args... args) {
    if (*format != '\0') {
        printf(format, args...);
    }
}

void ca_calc_mem_sizes(unsigned long& memoryLoadPercent, unsigned long& peakMemoryUsage) {
    MEMORYSTATUSEX memoryStatus;
    memoryStatus.dwLength = sizeof(memoryStatus);
    PROCESS_MEMORY_COUNTERS memoryCounters;
    HANDLE currentProcess = GetCurrentProcess();

    GlobalMemoryStatusEx(&memoryStatus);
    GetProcessMemoryInfo(currentProcess, &memoryCounters, sizeof(memoryCounters));

    memoryLoadPercent = memoryStatus.dwMemoryLoad & 0xffffffff;
    peakMemoryUsage = memoryStatus.dwMemoryLoad - memoryCounters.PeakWorkingSetSize;
}
