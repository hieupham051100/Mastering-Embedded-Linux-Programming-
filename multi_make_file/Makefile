# Tên file thực thi
TARGET = app

# Các file nguồn
SRCS = main.c tinh_tong.c tinh_hieu.c

# Tự động tạo danh sách file .o từ .c
OBJS = $(SRCS:.c=.o)

# Trình biên dịch và flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Mục mặc định
all: $(TARGET)

# Build chương trình
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Build từng file .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJS) $(TARGET)

