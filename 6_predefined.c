void func(void) {
    char current_line[] = __LINE__;
    char current_function[] = __FUNCTION__;
    char current_time[] = __TIME__;
    char current_date[] = __DATE__;
    char current_file[] = __FILE__;
}

int main(void) {
    char current_line[] = __LINE__;
    char current_function[] = __FUNCTION__;
    char current_time[] = __TIME__;
    char current_date[] = __DATE__;
    char current_file[] = __FILE__;

    func();

    return 0;
}