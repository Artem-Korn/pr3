#include "Header.h"

int main()
{
    cout << "S-Box Test: " << endl;

    Box::test("encrypt 9a(b8)", Box::encrypt_s_box(0x9a), 0xb8);
    Box::test("decrypt b8(9a)", Box::decrypt_s_box(0xb8), 0x9a);
    Box::test("encrypt&decrypt ff", Box::decrypt_s_box(Box::encrypt_s_box(0xff)), 0xff);

    cout << "P-Box Test: " << endl;

    Box::test("encrypt 9a(99)", Box::encrypt_p_box(0x9a), 0x99);
    Box::test("decrypt 99(9a)", Box::decrypt_p_box(0x99), 0x9a);
    Box::test("encrypt&decrypt ff", Box::decrypt_p_box(Box::encrypt_p_box(0xff)), 0xff);
}