#pragma once
#include <iostream>
#include <string>
using namespace std;

class Box {
    // S-Box const table
    static const unsigned s_box_table[16][16];
    static const unsigned inverse_s_box_table[16][16];

    // P-Box indexes positions
    static const unsigned p_box[8];
    static const unsigned inverse_p_box[8];

public:
    // S-Box encrypt & decrypt methods
    static unsigned encrypt_s_box(unsigned);
    static unsigned decrypt_s_box(unsigned);

    // P-Box encrypt & decrypt methods
    static unsigned encrypt_p_box(unsigned);
    static unsigned decrypt_p_box(unsigned);

    // Additional methods for getting and setting bits
    static unsigned get_bit(unsigned, unsigned);
    static unsigned set_bit(unsigned, unsigned, unsigned);
    
    // Method for printing results
    static void test(string, unsigned, unsigned);
};