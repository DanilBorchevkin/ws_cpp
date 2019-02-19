#define TRUE    1

int main(void) {
    int val = 0;

    val = TRUE;

    // Ough!
#undef TRUE
#define TRUE    0
    
    val = TRUE;

    return 0;
}