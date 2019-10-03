/** parametric_polymorphism.c
 * Basado en el archivo c_parametric_polymorphism.c
 * Listing 9-56 del libro:
 * Low Level Programming C, Assembly and Program Execution 
 * on Intel 64 Arquitecture, Apress (2017).pdf de 
 * Igor Zhirkov.
 */
#ifndef PREP
#include <stdio.h>
#include <stdbool.h>
#endif /*PREP*/

#define pair(T) pair_##T
#define DEFINE_PAIR(T) struct pair(T) {\
    T fst;\
    T snd;\
};\
bool pair_##T##_any(struct pair(T) pair, bool (*predicate)(T)) {\
    return predicate(pair.fst) || predicate(pair.snd); \
}

#define any(T) pair_##T##_any

DEFINE_PAIR(int)
DEFINE_PAIR(float)

    bool is_positive( int x ) { return x > 0; }
    bool is_positive( float x ) { return x > 0; }
    int main( int argc, char** argv ) {
        struct pair(int) obj;
        obj.fst = 1;
        obj.snd = -1;
        printf("%d\n", any(int)(obj, is_positive) );
        printf("/***********************************/\n");
        struct pair(float) objFloat;
        objFloat.fst = 1.0f;
        objFloat.snd = -1.0f;
        printf("%d\n", any(float)(objFloat, is_positive) );
        printf("/***********************************/\n");
        return 0; 
    }

