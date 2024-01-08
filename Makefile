CFLAGS=-Werror -Wall -Wextra -Wconversion
LDFLAGS=-lraylib -ldl -lpthread -lm
DIR=src
FILES=$(addsuffix /*.c ,$(DIR))
SRCS=$(wildcard $(FILES))
BIN=gui

.PHONY=all

all: build
	@./gui

build:
	$(CC) $(CFLAGS) $(SRCS) $(LDFLAGS) -o $(BIN)


help:
	@echo $(SRCS)
	@echo $(OBJS)
	@echo $(BUILD_FILES)

