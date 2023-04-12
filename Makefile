default : chute_fp chute_vf.o

chute_fp : chute_fp.c
	cc -o chute_fp chute_fp.c

chute_vf.o : chute_vf.c
	cc -c chute_vf.c

clean :
	rm -f chute_fp chute.data *.o

