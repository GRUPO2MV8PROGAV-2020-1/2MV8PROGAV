EXE:=TestShellPolinomios.exe
FUNCION00:=funcion00
FUNCION01:=funcion01
FUNCION02:=funcion02
FUNCION03:=funcion03
FUNCION04:=funcion04
FUNCION05:=funcion05
FUNCION06:=funcion06
FUNCION07:=
FUNCION08:=
FUNCION09:=
FUNCION10:=
FUNCION11:=
FUNCION12:=
FUNCION13:=
FUNCION14:=
FUNCION15:=
FUNCION16:=
FUNCION17:=
FUNCION18:=
FUNCION19:=
FUNCION20:=
FUNCION21:=
FUNCION22:=
FUNCION23:=
FUNCION24:=
FUNCION25:=
FUNCION26:=
ifeq ($(FUNCION00),)
OBJFUNCION00:=
else
OBJFUNCION00:=$(FUNCION00).o
endif
ifeq ($(FUNCION01),)
OBJFUNCION01:=
else
OBJFUNCION01:=$(FUNCION01).o
endif
ifeq ($(FUNCION02),)
OBJFUNCION02:=
else
OBJFUNCION02:=$(FUNCION02).o
endif
ifeq ($(FUNCION03),)
OBJFUNCION03:=
else
OBJFUNCION03:=$(FUNCION03).o
endif
ifeq ($(FUNCION04),)
OBJFUNCION04:=
else
OBJFUNCION04:=$(FUNCION04).o
endif
ifeq ($(FUNCION05),)
OBJFUNCION05:=
else
OBJFUNCION05:=$(FUNCION05).o
endif
ifeq ($(FUNCION06),)
OBJFUNCION06:=
else
OBJFUNCION06:=$(FUNCION06).o
endif
ifeq ($(FUNCION07),)
OBJFUNCION07:=
else
OBJFUNCION07:=$(FUNCION07).o
endif
ifeq ($(FUNCION08),)
OBJFUNCION08:=
else
OBJFUNCION08:=$(FUNCION08).o
endif
ifeq ($(FUNCION09),)
OBJFUNCION09:=
else
OBJFUNCION09:=$(FUNCION09).o
endif
ifeq ($(FUNCION10),)
OBJFUNCION10:=
else
OBJFUNCION10:=$(FUNCION10).o
endif
ifeq ($(FUNCION11),)
OBJFUNCION11:=
else
OBJFUNCION11:=$(FUNCION11).o
endif
ifeq ($(FUNCION12),)
OBJFUNCION12:=
else
OBJFUNCION12:=$(FUNCION12).o
endif
ifeq ($(FUNCION13),)
OBJFUNCION13:=
else
OBJFUNCION13:=$(FUNCION13).o
endif
ifeq ($(FUNCION14),)
OBJFUNCION14:=
else
OBJFUNCION14:=$(FUNCION14).o
endif
ifeq ($(FUNCION15),)
OBJFUNCION15:=
else
OBJFUNCION15:=$(FUNCION15).o
endif
ifeq ($(FUNCION16),)
OBJFUNCION16:=
else
OBJFUNCION16:=$(FUNCION16).o
endif
ifeq ($(FUNCION17),)
OBJFUNCION07:=
else
OBJFUNCION17:=$(FUNCION17).o
endif
ifeq ($(FUNCION18),)
OBJFUNCION18:=
else
OBJFUNCION18:=$(FUNCION18).o
endif
ifeq ($(FUNCION19),)
OBJFUNCION19:=
else
OBJFUNCION19:=$(FUNCION19).o
endif
ifeq ($(FUNCION20),)
OBJFUNCION20:=
else
OBJFUNCION20:=$(FUNCION20).o
endif
ifeq ($(FUNCION21),)
OBJFUNCION21:=
else
OBJFUNCION21:=$(FUNCION21).o
endif
ifeq ($(FUNCION22),)
OBJFUNCION22:=
else
OBJFUNCION22:=$(FUNCION22).o
endif
ifeq ($(FUNCION23),)
OBJFUNCION23:=
else
OBJFUNCION23:=$(FUNCION23).o
endif
ifeq ($(FUNCION24),)
OBJFUNCION24:=
else
OBJFUNCION24:=$(FUNCION24).o
endif
ifeq ($(FUNCION25),)
OBJFUNCION25:=
else
OBJFUNCION25:=$(FUNCION45).o
endif
ifeq ($(FUNCION26),)
OBJFUNCION26:=
else
OBJFUNCION26:=$(FUNCION26).o
endif
#CC=gcc
CC=g++
CFLAGS+=-DDISC$(FUNCION00) -DDISC$(FUNCION01) \
	-DDISC$(FUNCION02) -DDISC$(FUNCION03) \
	-DDISC$(FUNCION04) -DDISC$(FUNCION05) \
	-DDISC$(FUNCION06) -DDISC$(FUNCION07) \
	-DDISC$(FUNCION08) -DDISC$(FUNCION09) \
	-DDISC$(FUNCION10) -DDISC$(FUNCION11) \
	-DDISC$(FUNCION12) -DDISC$(FUNCION13) \
	-DDISC$(FUNCION14) -DDISC$(FUNCION15) \
	-DDISC$(FUNCION16) -DDISC$(FUNCION17) \
	-DDISC$(FUNCION18) -DDISC$(FUNCION19) \
	-DDISC$(FUNCION20) -DDISC$(FUNCION21) \
	-DDISC$(FUNCION22) -DDISC$(FUNCION23) \
	-DDISC$(FUNCION24) -DDISC$(FUNCION25) \
	-DDISC$(FUNCION26)

OBJETOS:=Directory_entry.o Pol_Directory.o \
	Polinomio.o Rac.o ShellPolinomios.o\
	String_Tokenizer.o $(OBJFUNCION00)\
	$(OBJFUNCION01) $(OBJFUNCION02)\
	$(OBJFUNCION03) $(OBJFUNCION04)\
	$(OBJFUNCION05) $(OBJFUNCION06)\
	$(OBJFUNCION07) $(OBJFUNCION08)\
	$(OBJFUNCION09) $(OBJFUNCION10)\
	$(OBJFUNCION11) $(OBJFUNCION12)\
	$(OBJFUNCION13) $(OBJFUNCION14)\
	$(OBJFUNCION15) $(OBJFUNCION16)\
	$(OBJFUNCION17) $(OBJFUNCION18)\
	$(OBJFUNCION19) $(OBJFUNCION20)\
	$(OBJFUNCION21) $(OBJFUNCION22)\
	$(OBJFUNCION23) $(OBJFUNCION24)\
	$(OBJFUNCION25) $(OBJFUNCION26)\

$(EXE):$(OBJETOS)
	$(CC) $^ -o $@
clean:
	rm -v *.o $(EXE)
