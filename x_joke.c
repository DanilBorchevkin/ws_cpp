// Default defines
#define TRUE    1
#define FALSE   !TRUE

// Some jokes

// maybe we can chenge return statement?
//#define return X return random(10) ? X : !X

int square(int val) {
    int ret = FALSE;

    if (val > 100) {
        ret = TRUE;
    };

    return val;
}

int main(void) {
    square(5);

    return 0;
}