##############################################################
		## MakeFile ##
##############################################################


##############################################################

# Folder #
IDIR = ./Header_File
SRC = ./Source_Files
ODIR = ./Object_Files

# Executable File Name #
EXEC = ./Executable_File/BST

# Commands and Flags #
CC = gcc
CFLAGS = -I$(IDIR) -Wall -Werror -g
RMV = rm -f
LIST = ls -alRh

OBJFLAG = -gdwarf-2
OBJDUMP = objdump -d --source
OBJSEC = objdump -sj
SECTION =

READELF = readelf -a
OBJFILE =

GDB= gdb

##############################################################


##############################################################

# Substituting Header File #
_DEPS = header.h
DEPS = $(patsubst %, $(IDIR)/%, $(_DEPS))

# Substitute Relocatable Object File in Object Folder #
source := $(shell find $(SRC) -name "*.c")
objects := $(patsubst $(SRC)/%.c, $(ODIR)/%.o, $(source))

# Generating Relocatable Object File #
$(ODIR)/%.o:$(SRC)/%.c
	$(CC) $(CFLAGS) $(OBJFLAG) -c -o $@ $<

# Generating Executable File #
$(EXEC): $(objects)
	$(CC) $(CFLAGS) $(OBJFLAG) -o $@ $^

##############################################################


##############################################################

# Assigning Phony Targets #
.PHONY: clean run list readelf

# Removes Relocatable Object File and Executable File #
# > make clean #
clean:
	$(RMV) $(ODIR)/*.o $(EXEC)

# Executes Code #
# > make run #
run:
	./$(EXEC)

# List All Directory Content Recursively #
# > make list #
list:
	$(LIST)

# Display Information About ELF File #
# > make readelf #
readelf:
	$(READELF) $(EXEC) | less

##############################################################
