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
