# Makefile template for shared library

APPSRC =  main.c
APPOBJ = $(APPSRC:.c=.o)
APPOUT = finaltest

CC = gcc # C compiler

# include directories
INCLUDES = -I .

CFLAGS = -Wall -Wextra $(INCLUDES) -g # C flags
RM = rm -f  # rm command

.PHONY: all
all: ${APPOUT}

$(APPOUT): $(APPOBJ)
	$(CC) $(CFLAGS) $(INCLUDES) $(APPSRC) -L. -lwifi -lpcap -o $(APPOUT)
