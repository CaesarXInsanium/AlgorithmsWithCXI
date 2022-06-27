all:
	meson compile -C build
test:
	meson test -C build

stack: all
	./build/stack

queue: all
	./build/queue
