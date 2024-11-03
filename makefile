
DED_FLAGS=-Wall -Wextra -Weffc++ -Wcast-align -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wfloat-equal -Wformat-security -Wformat=2 -Wignored-qualifiers -Winit-self -Winline -Wlogical-op -Wmain -Wmissing-declarations -Wno-missing-field-initializers -Wmissing-include-dirs -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wredundant-decls -Wshadow -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wswitch-default -Wswitch-enum -Wtype-limits -Wundef -Wunreachable-code -Wwrite-strings -fexceptions -g -pipe -D_DEBUG -D_EJUDGE_CLIENT_SIDE -D_EJC
FILES=main.cpp my_recalloc.cpp stack_ctor.cpp stack_push.cpp stack_pop.cpp stack_destructor.cpp stack_verificator.cpp stack_dump.cpp errors.cpp
FILE_OBJECTS=$(addprefix build/, $(patsubst %.cpp, %.o, $(FILES)))
EXE_NAME=stack

# TODO read about
# addprefix
# patsubst
# wildcard * ->  
# -l -L, стат. библиотека

#TODO разбить на 3 проги
all: stack

lib: $(FILE_OBJECTS)
	@ar r libmystack.a $^

stack: $(FILE_OBJECTS)
	g++ $^ -o stack

build/%.o: src/%.cpp
	g++ -c $^ -I./include -o $@

clean:
	rm -rf build/* *.exe libmystack.a