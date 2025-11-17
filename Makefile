a.out : main.o addbeg.o addlast.o delbeg.o dellast.o addsort.o middlenode.o print.o save.o sync.o delall.o
        gcc main.o addbeg.o addlast.o delbeg.o dellast.o addsort.o middlenode.o print.o save.o sync.o delall.o -o a.out
main.o : main.c
        cc -c main.c
addbeg.o : addbeg.c
        cc -c addbeg.c
addlast.o : addlast.c
        cc -c addlast.c
delbeg.o : delbeg.c
        cc -c delbeg.c
dellast.o : dellast.c
        cc -c dellast.c
addsort.o : addsort.c
        cc -c addsort.c
middlenode.o : middlenode.c
        cc -c middlenode.c
print.o : print.c
        cc -c print.c
delall.o : delall.c
        cc -c delall.c
save.o : save.c
        cc -c save.c
sync.o : sync.c
        cc -c sync.c
