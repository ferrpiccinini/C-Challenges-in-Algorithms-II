#include <stdio.h>
#include <math.h>

/*int main(){
    int a,b,c;
    printf("insira valores p A,B,C");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c){
        printf("o triangulo e equilatero");
    }
    else if(a!=b && a!=c && c!=b){
        printf("o triangulo e escaleno");
    }
    else{
        printf("o triangulo e isoceles");
    }
}
*/

#include <stdio.h>

#define MAX 5

int append(int vet[], int* n, int elem) {
    if (*n < MAX - 1) {
        vet[*n] = elem;
        (*n)++;
        return 1;
    }
    return 0;
}



int main(int argc, char const *argv[]) {
    int vetor[MAX];
    int n = 0;
	
    append(vetor, &n, 10);
    printf("%d\n",n);
    append(vetor, &n, 32);
    printf("%d\n",n);
    append(vetor, &n, 12);
    printf("%d\n",n);

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // removendo o ultimo elemento:
    n--;

    return 0;
}