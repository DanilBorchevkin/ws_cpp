#define NUM(name,number) name##_##number

int main(void) {
    int NUM(relay, 1) = 0x33;
    int NUM(relay, 2) = 0x44;
    int NUM(button, 1) = 0x55;
    int NUM(button, 2) = 0x66;

    return 0;
}