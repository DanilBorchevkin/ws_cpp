int main(void) {
    char current_line[] = __LINE__;
    char current_function[] = __FUNCTION__;
    char current_time[] = __TIME__;
    char current_date[] = __DATE__;
    char current_file[] = __FILE__;

    // Some magic
    #line 133 "new_file_name"
    char new_current_line[] = __LINE__;
    char new_current_function[] = __FUNCTION__;
    char new_current_time[] = __TIME__;
    char new_current_date[] = __DATE__;
    char new_current_file[] = __FILE__;

    return 0;
}