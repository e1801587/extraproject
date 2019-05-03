OBJ = project.o screen.o
APPNAME = project.out

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)

%.o : %.c
	gcc -c -o $@ $<

clean :
	rm $(APPNAME) $(OBJ) wlist.txt
