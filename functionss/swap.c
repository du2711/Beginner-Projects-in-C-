#include <stdio.h>
void swap(int *a,int *b){
    *a=(*a+*b)-(*b=*a);
}
int main() {
    int p,q;
    printf("Enter A: ");
    scanf("%d",&p);
    printf("Enter B: ");
    scanf("%d",&q);
    swap(&p,&q);
    printf("swaped value of \nA: %d\nB: %d",p,q);
    return 0;
}

// - swap(p, q); sends copies of p and q into the function.
// - Inside swap(), the trick works on those copies.
// - But when the function ends, those swapped copies are discarded.
// - p and q in main() are untouched.
