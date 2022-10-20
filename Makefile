all:  ex01 ex02 ex03 ex04


ex01: ex01.c
	gcc ex01.c -o ex01 -fno-stack-protector -no-pie

ex02: ex02.c
	gcc ex02.c -o ex02 -fno-stack-protector -no-pie

ex03: ex03.c
	gcc ex03.c -o ex03 -fno-stack-protector -no-pie

ex04: ex04.c
	gcc ex04.c -o ex04
