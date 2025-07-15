
CFLAGS := -Wall -g -I ../inc
OBJECTS := tinh.o

all: static_tinh.a

tinh.o: tinh.c
	$(CC) $(CFLAGS) -c tinh.c 


# Build the static library
static_tinh.a: $(OBJECTS)
	ar rc static_tinh.a  $(OBJECTS)


clean:
	rm -f $(OBJECTS)
	rm -f static_tinh.a


