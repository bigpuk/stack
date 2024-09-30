
DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILE_OBJECTS=main.o my_recalloc.o stack_ctor.o stack_push.o
EXE_NAME=stack

all: stack

stack: $(FILE_OBJECTS)
	g++ $(DED_FLAGS) $(FILE_OBJECTS) -o $(EXE_NAME)

main.o: main.cpp
	g++ $(DED_FLAGS) -c main.cpp -o main.o

my_recalloc.o: my_recalloc.cpp
	g++ $(DED_FLAGS) -c my_recalloc.cpp -o my_recalloc.op

stack_ctor.o: stack_ctor.cpp
	g++ $(DED_FLAGS) -c stack_ctor.cpp -o stack_ctor.o

stack_push.o: stack_push.cpp
	g++ $(DED_FLAGS) -c stack_push.cpp -o stack_push.o

clean:
	rm -rf *.o stack $(EXE_NAME).exe
