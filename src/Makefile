CC = g++
CFLAGS = -Wall -Wextra -Werror -Wuninitialized
FILES = *.h *.cc
TARGET = client_hr

all: build

build: clean
	mkdir -p build
	cd build && \
	$(CC) $(CFLAGS) -c ../*.cc && \
	$(CC) $(CFLAGS) *.o -o ../$(TARGET) -L../../lib/ -lHR_Pro && \
	cd ../
	rm -rf build

clean:
	rm -f $(TARGET)
	rm -rf build

googlestyle:
	clang-format -style=Google -i $(FILES)

cppcheck:
	cppcheck --enable=all --suppress=missingIncludeSystem --language=c++ $(FILES)
