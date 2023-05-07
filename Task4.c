void create_arr4(float** , int*);
void input_arr4(float* , int , int*, int*);
void create_newa(float**, int, float**, int);
void sort_arrs(float*, int, float*, float*);
void output_arr4(float* ,int, float*, int);


void runtask_4(){
    float* pa;
    float* pplus;
    float* pminus;
    int n, pl, mi;

    create_arr4(&pa, &n);
    if(pa){
        input_arr4(pa, n, &pl, &mi);
        create_newa(&pplus,pl,&pminus,mi);
        sort_arrs(pa, n, pplus, pminus);
        output_arr4(pplus,pl,pminus,mi);
        free(pa);
        free(pplus);
        free(pminus);
    }
    if(!pa) printf("Memory allocation failed");
}
void create_arr4(float** pa, int* pn){

    printf("n = ");
    scanf("%d", pn);
    *pa = (float*)malloc((*pn) * sizeof(float));
}

void input_arr4(float *pa, int n, int* pl, int* mi){
    int i;
    *pl=0;
    *mi=0;
    printf("\nInput: ");
    for(i = 0; i < n; i++){
        scanf("%f", &pa[i]);
        if(pa[i]>0)*pl+=1;
        if(pa[i]<0)*mi+=1;
    }
}

void create_newa(float** pplus, int pl, float** pminus, int mi){
    *pplus = (float*)malloc((pl) * sizeof(float));
    *pminus = (float*)malloc((mi) * sizeof(float));
}

void sort_arrs(float* pa, int n, float* pplus, float* pminus){
    int i,j=0,k=0;
    for(i=0; i<n; i++){
        if(pa[i]>0)pplus[j++]=pa[i];
        if(pa[i]<0)pminus[k++]=pa[i];
    }
}

void output_arr4(float* pplus, int pl, float* pminus, int mi){
    int i,j;
    for(i=0; i<pl; i++)printf("Plus - %f\n",pplus[i]);
    for(j=0; j<mi; j++)printf("Minus - %f\n",pminus[j]);
}