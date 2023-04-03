A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address.
C struct directly references a contiguous block of physical memory, usually delimited (sized) by word-length boundaries. It corresponds to the similarly named feature available in some assemblers for Intel processors. Being a block of contiguous memory, each field within a struct is located at a certain fixed offset from the start.

Structure Declarations
1
struct tag_name {
   type member1;
   type member2;
2
typedef struct tag_name {
   type member1;
   type member2;
} struct_alias;
