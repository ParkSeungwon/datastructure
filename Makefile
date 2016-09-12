CFLAG = -g -fmax-errors=3
CC = gcc
EXE = $(patsubst %.c, %.x, $(wildcard *.c))
PNG = $(patsubst %.c, %.png, $(wildcard *.c))

all : $(EXE)
png : $(PNG)
tex : report.pdf

%.x : %.c
	$(CC) $< -o $@ $(CFLAG)

%.png : %.x
	@echo "----------Executing Program--------------------------"
	./$<
	@echo "----------Ending Program-----------------------------"
	@gnome-screenshot -wBf $@

report.pdf : report.tex $(PNG) $(EXE) $(wildcard *.c)
	pdflatex report.tex
	okular report.pdf

clean:
	rm $(EXE)
