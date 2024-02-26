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
	g++-12 -std=gnu++20 -O2 -Wall -Wextra -mtune=native -march=native -fconstexpr-depth=2147483647 -fconstexpr-loop-limit=2147483647 -fconstexpr-ops-limit=2147483647 -I/opt/ac-library -I/opt/boost/gcc/include -L/opt/boost/gcc/lib -o a.out main.cpp -I/usr/include/eigen3

.PHONY: clean
clean:
	-rm -r a.out
