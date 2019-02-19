#define SQUARE_WRONG(x) x*x
#define SQUARE_RIGHT(x) ((x)*(x))

int main(void) {
    int val = 5;
    int result = 0;

    // Wrong square macros
    result = SQUARE_WRONG(val+1);
    // Right square macros
    result = SQUARE_RIGHT(val+1);
    // Sorry but mission incoplished
    result = SQUARE_RIGHT(val++);

    return 0;
}