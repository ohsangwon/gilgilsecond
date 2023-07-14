CC = gcc
CFLAGS = -Wall -Wextra
LDFLAGS = -lm

SRCS = add-nbo.c
OBJS = $(SRCS:.c=.o)
EXEC = add-nbo

.PHONY: all clean

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)
