#define DEBUG

int main(void) {
    int val = 0;

#ifdef DEBUG
    //Some debug actions
    val = val + 1;
#else
    val = 1000;
#endif

    return 0;
}