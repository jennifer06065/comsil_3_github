cc=g++
target = exe
objects = main.o Array.o RangeArray.o

$(target): $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Array.h RangeArray.h

.PHONY : clean
clean :
	rm $(target) $(objects)
