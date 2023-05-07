void create_arr2(float**, int*);
void input_arr2(float*, int);
void find_zero(float*, int, int*);
void find_min(float*, int, int);

void runtask_2()
{
    float* pa;
    int n,posofzero;

    create_arr2(&pa, &n);
    if(pa){
        input_arr2(pa, n);
        find_zero(pa, n, &posofzero);
        find_min(pa, n, posofzero);
        free(pa);
    }
    if(!pa) printf("Memory allocation failed");
}

void create_arr2(float **pa, int *pn){
    printf("n = ");
    scanf("%d", pn);

    *pa = (float*)malloc((*pn) * sizeof(float));
}

void input_arr2(float *pa, int n){
	int i;
    printf("\nInput: ");
    for(i = 0; i < n; i++)
        scanf("%f", &pa[i]);
}

void find_zero(float* pa, int n, int* posofzero){
	int i;
    for(i = 0; i<n; i++)if(pa[i]==0)*posofzero=i;
}

void find_min(float* pa, int n, int posofzero){
    float min;
    int i;
    posofzero++;
    min=*(pa+posofzero);
    for(i=posofzero; i<n; i++)if(pa[i]>0 && pa[i]<min)min=pa[i];
    printf("%f",min);
}
