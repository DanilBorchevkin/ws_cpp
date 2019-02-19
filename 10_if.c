#define CLIENTS 10

int main(void) {
    int val = 0;

#if CLIENTS == 0
    val = CLIENTS;
#elif CLIENTS == 5
    val = CLIENTS * 5;
#elif CLIENTS == 9
    val = CLIENTS * 10;
#elif CLIENTS >= 10
    val = CLIENTS;
#endif
    
    return 0;
}