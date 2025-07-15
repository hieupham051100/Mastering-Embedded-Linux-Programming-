CFLAGS = -Wall -g -I ../inc
PROGS = modular_build_static modular_build_share 

all : $(PROGS)

main.o: main.c 
	$(CC) $(CFLAGS) -c $^ -o $@

modular_build_static: main.o
	$(CC) $(CFLAGS) -o $@ $^ ../static/static_tinh.a

modular_build_share: main.o
	$(CC) -o $@ $^ -L../share -lshare_tinh
clean:
	rm -f *.o
	rm -f $(PROGS)

install: 
	cp $(PROGS) $(TARGET_DIR)/user/local/bin



