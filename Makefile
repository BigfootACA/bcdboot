CFLAGS = -std=gnu11 -Wall -Wextra -Werror
LDFLAGS = -lhivex -lblkid -luuid
all: bcdboot
clean:
	rm -f bcdboot *.o
bcdboot: bcdboot.o bcdstore.o keyval.o
.PHONY: all clean
