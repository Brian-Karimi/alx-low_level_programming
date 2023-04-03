Static Libraries : collection of object files that are linked into the program during the linking phase but irrelevant during run time
ar rc libName.a objectFile1.o objectFile2.o
ar-archiver- creates, modifies, lists names of object files
rc flags- 'r' tell the lib to replace  older o.f with new o.f while 'c' tell the lib to create new o.f's if they are not there
ranlib: Indexes the static lib
SHared/ Dynamic Libraries: Linked to the program in two stages
During compilation when the linker verifes that all the symbols are either  linked to the program or in one of its shared libraries
//cc -fPIC -c util_file.c
cc -fPIC -c util_net.c
cc -fPIC -c util_math.c
cc -shared libutil.so util_file.o util_net.o util_math.o
//
