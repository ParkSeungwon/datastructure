CFLAG = -g -fmax-errors=3
CC = gcc
SRC = $(wildcard *.c)
EXE = $(patsubst %.c, %.x, $(SRC))
PNG = $(patsubst %.c, %.png, $(SRC))

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

report.pdf : report.tex $(PNG) $(EXE) $(SRC)
	pdflatex report.tex
	evince report.pdf

clean:
	rm $(EXE)
