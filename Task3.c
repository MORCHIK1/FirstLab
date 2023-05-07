void create_arr3(float** , int* , float**, int*, float**);
void input_arr3(float* , int, float*, int);
void find_same_nums(float*, int, float*, int, float*, int*);
float max(float*, int);
float sum(float*, int);
void output_arr3(float* ,int, int, float);


void runtask_3(){
    float *pa;
    float *pb;
    float *pc;
    int n,m,cn = 0, maximum, suma;

    create_arr3(&pa, &n, &pb, &m, &pc);
    if(pa && pb){
        input_arr3(pa, n, pb, m);
        find_same_nums(pa, n, pb, m, pc, &cn);
        maximum = max(pc,cn);
        suma = sum(pc,cn);
        output_arr3(pc, cn, maximum, suma);
        free(pa);
        free(pb);
    }
    if(!pa || !pb) printf("Memory allocation failed");
}
void create_arr3(float** pa, int* pn,float** pb, int* pm, float **pc){

    printf("n = ");
    scanf("%d", pn);
    int min = *pn;
    printf("m = ");
    scanf("%d", pm);

    if(min > *pm) min = *pm;

    *pa = (float*)malloc((*pn) * sizeof(float));
    *pb = (float*)malloc((*pm) * sizeof(float));
    *pc = (float*)malloc(min * sizeof(float));
}

void input_arr3(float *pa, int n, float* pb, int m){
	int i;
    printf("\nInput: ");
    for(i = 0; i < n; i++)
        scanf("%f", &pa[i]);

    printf("\nInput: ");
    for(i = 0; i < m; i++)
        scanf("%f", &pb[i]);

}

void find_same_nums(float* pa, int n, float *pb, int m, float* pc, int *cn){
    int i,ozn,oznC,k,j;
    int count = *cn;
    for(i=0; i<n; i++){
        ozn=0;
        for(j=0; (j<m) && ozn==0; j++)
            if(pa[i]==pb[j]) ozn=1;
        if(ozn){
            oznC=0;
            for(k=0; k<count && oznC==0; k++)
                if(pc[k]==pa[i])oznC=1;
            if(oznC==0){
                pc[count++]=pa[i];
            }
        }
    }
    *cn = count;
}

float max(float* pc, int cn){
    int maximum, k;
    maximum = 0;
    for(k=1; k<cn; k++)
        if (pc[maximum] < pc[k]){
            maximum=k;
        }
    return maximum;
}

float sum(float* pc, int cn){
    int i;
    float allnums=0;
    for(i=0; i<cn; i++)allnums+=pc[i];
    return allnums;
}

void output_arr3(float* pc, int cn, int maximum, float suma){
    int i;
    for(i=0; i<cn; i++)printf("%.2f ",pc[i]);
    printf("\nmax: %.2f", pc[maximum]);
    printf("\nsum: %.2f", suma);
}
