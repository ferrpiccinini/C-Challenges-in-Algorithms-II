int main(){
    int* lista = (int*)malloc(sizeof(int)*999);
    int n; int I;

    printf("insira o valor N: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("insira o num na pos %d: ",i);
        scanf("%d",&lista[i]);
    }

    printf("insira o valor de I: ");
    scanf("%d",&I);

    for(int i=I;i<n;i++){
        lista[i] = lista[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",lista[i]);
    }

    free(lista);

}