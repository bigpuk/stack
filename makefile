
DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILE_OBJECTS=main.o my_recalloc.o stack_ctor.o stack_push.o stack_pop.o stack_destructor.o stack_verificator.o stack_dump.o errors.o
EXE_NAME=stack

# TODO read about
# addprefix
# patsubst
# wildcard * ->  

all: stack

stack: $(FILE_OBJECTS)
	@echo "[LD] Linking"
	@g++ $(DED_FLAGS) $(FILE_OBJECTS) -o $(EXE_NAME)

main.o: main.cpp
	@echo "[CXX] main"
	@g++ $(DED_FLAGS) -c main.cpp -o main.o

my_recalloc.o: my_recalloc.cpp
	@echo "[CXX] my_recalloc"
	@g++ $(DED_FLAGS) -c my_recalloc.cpp -o my_recalloc.o

stack_ctor.o: stack_ctor.cpp
	@echo "[CXX] stack_ctor"
	@g++ $(DED_FLAGS) -c stack_ctor.cpp -o stack_ctor.o

stack_push.o: stack_push.cpp
	@echo "[CXX] stack_push"
	@g++ $(DED_FLAGS) -c stack_push.cpp -o stack_push.o

stack_pop.o: stack_pop.cpp
	@echo "[CXX] stack_pop"
	@g++ $(DED_FLAGS) -c stack_pop.cpp -o stack_pop.o

stack_destructor.o: stack_destructor.cpp
	@echo "[CXX] stack_destructor"
	@g++ $(DED_FLAGS) -c stack_destructor.cpp -o stack_destructor.o

stack_verificator.o: stack_verificator.cpp
	@echo "[CXX] stack_verificator"
	@g++ $(DED_FLAGS) -c stack_verificator.cpp -o stack_verificator.o

stack_dump.o: stack_dump.cpp
	@echo "[CXX] stack_dump"
	@g++ $(DED_FLAGS) -c stack_dump.cpp -o stack_dump.o

errors.o: errors.cpp
	@echo "[CXX] errors"
	@g++ $(DED_FLAGS) -c errors.cpp -o errors.o

clean:
	rm -rf *.o stack $(EXE_NAME).exe
