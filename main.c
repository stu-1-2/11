#include "parser.h"
#include <stdio.h>
int main() {
    const char *test_str = "Hello Parser";
    printf("字符串长度：%d\n", parse_str_length(test_str));
    int line_count = parse_file_linecount(__FILE__);
    printf("当前文件行数：%d\n", line_count);
    return 0;
}
