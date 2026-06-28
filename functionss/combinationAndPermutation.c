// #include <stdio.h>
// int fact(int a){
//     if(a==1 || a==0) return 1;
//     else return a*fact(a-1);
// }
// int main(){
//     int n,r;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     printf("Enter r: ");
//     scanf("%d",&r);

//     long rfact=fact(r),nfact=fact(n);
//     int cp;
//     printf("Enter Your choice:\n 1.Combination\n 2.Permutation \nOption: ");
//     scanf("%d",&cp);

//     if(cp==1){
//         long long comb = nfact/(rfact * fact(n-r));
//         printf("Combination is: %lld",comb);
//     }
//     else if(cp==2){ 
//         long long perm =nfact/fact(n-r)  ;
//         printf("Permutation is: %lld",perm);
//     }
//     else{
//         printf("Enter Valid input");
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);

    long long nfact=1;
    long long rfact=1;
    long long nrfact=1;

    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact*=i;
    }

    int ncr = nfact/(rfact*nrfact);
    printf("Combination: %d",ncr);
    return 0;
}