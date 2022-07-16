all:
	meson compile -C build -v
test:
	meson test -C build

stack: all
	gdb ./build/stack

queue: all
	gdb ./build/queue

set: all
	gdb ./build/set

chtbl: all
	gdb ./build/chtbl

ohtbl: all
	gdb ./build/ohtbl

bitree: all
	gdb ./build/bitree

bistree: all
	gdb ./build/bistree

heap: all
	gdb ./build/heap

