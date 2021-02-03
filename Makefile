EXECUTABLE = libft

BUILD_DIR := ./build
SRC_DIRS := ./srcs

CC = gcc

CFLAGS = -Wall -Wextra -Werror 

SRCS := $(shell find $(SRC_DIRS) -name *.c)

OBJS := $(SRCS:%.c=$(BUILD_DIR)/%.o)

DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)

INC_FLAGS := $(addprefix -I,$(INC_DIRS))

$(EXECUTABLE): $(OBJS)
	@ar rcs $(EXECUTABLE) $(OBJS)
	rm -r $(BUILD_DIR)

$(BUILD_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm $(EXECUTABLE)

-include $(DEPS)