#include <iostream>
#include "main.h"

using namespace std;

VM::VM() {
    this->load(new int[2048]);
}

VM::VM(int* instructions) {
    this->load(instructions);
}

void VM::load(int* instructions) {
    this->instructions = instructions;
    this->counter = 0;
    this->program_length = sizeof(instructions);
}

void VM::run() {
    while (this->counter < this->program_length) {
        // This just test displays all instructions loaded in.
        // cout << this->instructions[this->counter] << endl;

        this->counter++;
    }
}