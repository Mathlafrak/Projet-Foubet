default : chute_vf chute_fp


chute_vf: vfix.o chute_vf.o
	gcc vfix.o chute_vf.o -o chute_vf

chute_fp: vfix.o chute_fp.o
	gcc vfix.o chute_fp.o -o chute_fp

chute_fp.o: chute_fp.c 
	gcc -c chute_fp.c

chute_vf.o: chute_vf.c 
	gcc -c chute_vf.c

vfix.o: vfix.c vfix.h
	gcc -c vfix.c

clean :
	rm -f *.o chute_vf chute_fp *.data