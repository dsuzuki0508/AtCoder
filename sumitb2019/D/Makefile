all: test
.PHONY: run
run: a.out
	./a.out < 1.in
.PHONY: test
test: a.out
	@for testfile in $(wildcard ./*.in); \
	do \
	    if [ -s $$testfile ]; then \
		echo ------------------------------------------------------------------------ ; \
		echo "Executing $$testfile "; \
		echo "INPUT: "; \
		cat $$testfile ; \
		echo "" ; \
		echo "OUTPUT: " ; \
		cat $$testfile | ./a.out ; \
	    fi \
	done

a.out: main.cpp
	g++ -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -I/opt/ac-library -o ./a.out ./main.cpp

.PHONY: clean
clean:
	-rm -r a.out
