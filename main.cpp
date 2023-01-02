#include <iostream>
#include "CPU.h"

int main(int argc, char** argv) {
    CPU::CPUInfo cpuInfo{};
    cpuInfo.ROMType = 255;
    cpuInfo.CPUId = 0;
    CPU* cpu = new CPU(cpuInfo);
    cpu->run();
    delete cpu;
    return 0;
}
