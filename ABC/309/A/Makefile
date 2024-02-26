all: test
.PHONY: test
test: a.out main.cpp
	@for testfile in $(wildcard ./*.in); \
	do \
	    if [ -s $$testfile ]; then \
		echo ------------------------------------------------------------------------ ; \
		echo "Executing $$testfile "; \
		echo "INPUT: "; \
		echo "====== "; \
		cat $$testfile ; \
		echo "" ; \
		echo "OUTPUT: " ; \
		echo "======= " ; \
		cat $$testfile | ./a.out ; \
	    fi \
	done
	@cat main.cpp | xsel -bi

a.out: main.cpp
	g++ -std=gnu++17 -Wall -Wextra -O2 -DONLINE_JUDGE -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -I/opt/ac-library -o ./a.out ./main.cpp

.PHONY: clean
clean:
	-rm -r a.out
