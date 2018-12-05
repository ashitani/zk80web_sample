TARGETS = hello.bin
FLAGS = --cpu=z80 -l -b
ASM = z80asm

all: $(TARGETS)

.SUFFIXES: .asm .bin
.asm.bin:
	$(ASM) $(FLAGS) $<
	python insert_addr.py $@ 0x8000

.PHONY: clean run
clean:
	$(RM) $(TARGETS) *.o  *.bin *.lis

