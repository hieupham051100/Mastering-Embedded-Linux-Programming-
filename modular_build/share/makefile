
CFLAGS := -Wall -g -I ../inc 
OBJECTS := tinh.o

all: libshare_tinh.so

tinh.o: tinh.c
	$(CC) $(CFLAGS) -c tinh.c


# Build the share library
libshare_tinh.so: $(OBJECTS)
	$(CC) -shared -o libshare_tinh.so $(OBJECTS)

clean:
	rm -f $(OBJECTS)
	rm -f libshare_tinh.so



