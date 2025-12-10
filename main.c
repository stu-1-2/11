#include "parser/parser.h"
#include <stdio.h>
int main() {
    const char *test_str = "Hello Parser";
    printf("字符串长度：%d\n", parse_str_length(test_str));
    return 0;
}
