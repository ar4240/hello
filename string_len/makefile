SRC = unity/unity.c\
src/length1.c\
src/max_len.c\
src/sum_len.c\
test/str_test.c\
str_main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = strings.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/length1.c -a src/max_len.c -a src/sum_len.c str_main.c