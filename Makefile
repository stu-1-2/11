CC = gcc
CFLAGS = -Wall -g
TARGET = app
SRCS = main.c parser/parser.c
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)
clean:
	rm -f $(TARGET)
