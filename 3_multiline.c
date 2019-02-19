#define MAKE_32(b1, b2, b3, b4) ( (char)b1 | \
(char)b2 << 8 | \
(char)b3 << 16 | \
(char)b4 << 24 )


int main(void) {
    int val = 5;
    int result = 0;

    // See here
    result = MAKE_32(0xAA, 0xBB, 0xCC, 0xDD);

    return 0;
}