obj = main.o quickfind.o quickunion.o
main : $(obj)
	g++ -o main $(obj)
main.o : quickfind.h
quickfind.o : quickfind.h
quickunion.o : quickunion.h

.PHONY : clean
clean : 
	rm -f *.o
