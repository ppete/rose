#/bin/bash -vx
if test "`find $1 \( -type d -exec test -d "{}/include-staging" \; -prune \) -o -type f \( -name "*.h" -o -name "*.hh" -o -name "*.code2" -o -name "*.macro" \) -exec grep -H "#include \"sage3basic.h\"\|#include <sage3basic.h>\|#include \"rose.h\"\|#include <rose.h>\|#include \"sage3.h\"\|#include <sage3.h>" {} \; |  grep -v "//#include \"sage3basic.h\"\|//#include <sage3basic.h>\|//#include \"rose.h\"\|//#include <rose.h>\|//#include \"sage3.h\"\|//#include <sage3.h>" | grep -v "// #include \"sage3basic.h\"\|// #include <sage3basic.h>\|// #include \"rose.h\"\|// #include <rose.h>\|// #include \"sage3.h\"\|// #include <sage3.h>" | wc | awk '{print $$1}'` -eq 0"; then echo "sage3basic.h or rose.h or sage3.h header check passed."; else echo "header files exist that include sage3basic.h or rose.h or sage3.h"; find $1 \( -type d -exec test -d "{}/include-staging" \; -prune \) -o -type f \( -name "*.h" -o -name "*.hh" -o -name "*.code" -o -name "*.macro" \) -exec grep -H "#include \"sage3basic.h\"\|#include <sage3basic.h>\|#include \"rose.h\"\|#include <rose.h>\|#include \"sage3.h\"\|#include <sage3.h>" {} \; | grep -v "//#include \"sage3basic.h\"\|//#include <sage3basic.h>\|//#include \"rose.h\"\|//#include <rose.h>\|//#include \"sage3.h\"\|//#include <sage3.h>" | grep -v "// #include \"sage3basic.h\"\|// #include <sage3basic.h>\|// #include \"rose.h\"\|// #include <rose.h>\|// #include \"sage3.h\"\|// #include <sage3.h>" ; exit 1; fi
