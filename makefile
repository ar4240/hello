SRC = unity/unity.c\
src/calc_sum.c\
src/calc_sub.c\
src/calc_mul.c\
src/calc_div.c\
test/calc_test.c\
calc_main.c

INC = -Iunity\
-Iinc\
-Itest

PROJECT_NAME = CALC.exe

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
	gcov -a src/calc_sum.c -a src/calc_sub.c -a src/calc_mul.c -a src/calc_div.c calc_main.c