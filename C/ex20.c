
int main(){
    int idade; int *a; int size = 0; int c = 0; int d = 0; int e = 0;
    a = (int*)malloc(sizeof(int)*999);

    printf("insira uma idade: ");
    scanf("%d",&idade);
    a[size] = idade;
    size++;
    while(idade>0){
        printf("insira uma idade: ");
        scanf("%d",&idade);
        if (idade >= 0) {  
            a[size] = idade;
            size++;
        }
    }
    for(int i=0;i<size;i++){
        c += a[i];
        if(a[i]>=18){
            d++;
        }
        if(a[i] > 75){
            e++;
        }
    }
    printf("\nmedia: %.2f\npessoas > 18: %d\nporcentagem > 75: %.2f%%",c/(float)size,d,((float)e/size)*100);
    free(a);
}
