BUILD_DIR=build
debug=all

all: $(BUILD_DIR)
	echo $(BUILD_DIR)
	meson compile -C  $(BUILD_DIR) -v

$(BUILD_DIR):
	meson setup build

clean:
	rm -rf $(BUILD_DIR)
	clear

test: $(BUILD_DIR)
	if [ $(debug) -eq "all" ]; then
		meson test -C $(BUILD_DIR)
	else
		if [ test -e $(BUILD_DIR)/$(debug) ]; then
			echo "file exits"
		else
			echo "file does not exist"
		fi
	fi


stack: all
	gdb ./$(BUILD_DIR)/stack

queue: all
	gdb ./$(BUILD_DIR)/queue

set: all
	gdb ./$(BUILD_DIR)/set

chtbl: all
	gdb ./$(BUILD_DIR)/chtbl

ohtbl: all
	gdb ./$(BUILD_DIR)/ohtbl

bitree: all
	gdb ./$(BUILD_DIR)/bitree

bistree: all
	gdb ./$(BUILD_DIR)/bistree

heap: all
	gdb ./$(BUILD_DIR)/heap

graph: all
	gdb ./$(BUILD_DIR)/graph

issort: all
	gdb ./$(BUILD_DIR)/issort

qksort: all
	gdb ./$(BUILD_DIR)/qksort

mgsort: all
	gdb ./$(BUILD_DIR)/mgsort
