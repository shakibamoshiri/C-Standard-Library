/*
    The C standard Library review

    01. assert.h
    02. ctype.h
    03. errno.h
    04. float.h
    05. limits.h
    06. locale.h
    07. math.h
    08. setjmp.h
    09. signal.h
    10. stdarg.h
    11. stddef.h
    12. stdio.h
    13. stdlib.h
    14. string.h
    15. time.h
*/
/// 01. assert.h
//  void assert( int expression )
//  This is actually a macro and not a function, which can be used to
//  add diagnostics in your C program.

#include <stdio.h>
#include <assert.h>

int main(){

    char string[ 40 ];

    printf( "Enter your name: " );
    scanf( "%s", &string );
    assert( string != NULL );
    printf( "You entered: %s\n", string );

    for( int index = 0; index < 10; ++index ){
        printf( "index %d\n", index );
    }
}

/* output

Enter your name: k-five
You entered: k-five
index 0
index 1
index 2
index 3
index 4
index 5
index 6
index 7
index 8
index 9


*/
