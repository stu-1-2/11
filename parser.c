#include "parser.h"
#include <string.h>
#include <stdio.h>
int parse_str_length(const char *str) {
    return str ? strlen(str) : 0;
}
int parse_file_linecount(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (!fp) return -1;
    int lines = 0;
    char buf[1024];
    while (fgets(buf, sizeof(buf), fp)) lines++;
    fclose(fp);
    return lines;
}
