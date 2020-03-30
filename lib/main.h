#pragma once

class VM {
    private:
        int* variables;
        int* instructions;
        int program_length;
        // Program counter (instruction index).
        int counter;

    public:
        VM();
        VM(int*);
        ~VM();

        // Load in an array of instructions.
        void load(int*);
        // Run the loaded instructions.
        void run();
        // Move the program counter to specific index.
        void move(int);
        // Increase program counter by specified step amount, and execute.
        void execute();
};