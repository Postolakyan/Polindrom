polindrom : polindromm.o polindromf.o  
		g++ $^   -o $@
%.o : %.cpp
		g++ -c $^ -o $@  

clean : 
	rm *.o polindrom
