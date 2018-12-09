TARGETS = hello.bin

CFLAGS = +z80 -vn -O3 -startup=0 -clib=new -create-app --opt-code-size
CC = zcc

.SUFFIXES: .bin

all: $(TARGETS)

tk80.lib: tk80.c
	$(CC) $(CFLAGS) -x -otk80 $<

hello.bin: hello.c tk80.lib
	$(CC) $(CFLAGS) -ltk80 -o$* $<
	python ../tools/insert_addr.py $@ 0x8000

.PHONY: clean
clean:
	$(RM) *.rom *.def *.bin *.sym *.lis *.lib
