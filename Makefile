IDIR = ../include
CC = g++
CFLAGS = -I$(IDIR)

ODIR = ../obj
LDIR = ../lib

LIBS = -lm

_DEPS = employee.h employee.cpp HourlyEmployee.h HourlyEmployee.cpp SalariedEmployee.cpp SalariedEmployee.h
DEPS := $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o employee.o SalariedEmployee.o HourlyEmployee.o
OBJ = $(patsubst &,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -cpp -o $< $(CFLAGS)
main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean
clean:
	rm -f $(ODIR)/*.o*~core $(INCRIR)/*~
