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
    #error "Clients >=10. Please refactor the code for working!"
#endif

    return 0;
}