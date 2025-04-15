//define the c compiler to use
CC = gcc
//define cflags to use(in this case enable all wanings and enable  all the errors)
CFLAGS = -Wall -Werror

//list the sourcefiles
SOURCES = main1.c 

//generate the list of objects files by replacing .c with .o
OBJECTS = $(SOURCES:.c=.o)

//define the target executable
TARGET = myprogram


//default target:build the executable
all: $(TARGET)


//rule to build the executable
$(TARGET): $(OBJECTS)

#link the objectfile to create an object file
	$(CC) $(CFLAGS) -o $@ $^


//rule to build object files from source files
%.o: %.c

//compile the sourcefile to create an objectfile
	$(CC) $(CFLAGS) -c $< -o $@

//Rule to clean up object files and executable
clean:

# Check if object files exist and delete them if they do
	if exist $(OBJECTS) del /f /q $(OBJECTS)

	# Check if target executable exists and delete it if it does
	if exist $(TARGET) del /f /q $(TARGET)
