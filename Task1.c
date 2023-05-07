void create_arr1(float**, int*);
void input_arr1(float*, int);
void create_additions_task1(float**, float**, int*);
void arrange_arr(float*, int, float*, float*);
void output_arr1(float* ,float*,int);


void runtask_1(){
    float *pa;
    float *pb;
    float *pc;
    int n;

    create_arr1(&pa, &n);
    create_additions_task1(&pb, &pc, &n);
    if(pa){
        input_arr1(pa, n);
        arrange_arr(pa, n, pb, pc);
        output_arr1(pb, pc, n);
        free(pa);
        free(pb);
        free(pc);
    }
    if(!pa) printf("Memory allocation failed");
}

void create_arr1(float** pa, int* pn){
    printf("n = ");
    scanf("%d", pn);

    *pa = (float*)malloc((*pn) * 2 * sizeof(float));
}

void input_arr1(float *pa, int n){
	int i;
    printf("\nInput: ");
    for(i = 0; i < 2*n; i++)
        scanf("%f", &pa[i]);
}

void create_additions_task1(float** pb, float** pc, int* pn){
    *pb=(float*)malloc((*pn) * sizeof(float));
    *pc=(float*)malloc((*pn) * sizeof(float));
}

void arrange_arr(float* pa, int n, float *pb, float *pc){
    int j = 0, k = 0, i;
    for(i = 0; i<2*n; i++){
        if(i%2 == 0){
            pb[j++] = pa[i];
        }
        else{
            pc[k++] = pa[i];
        }
    }
}

void output_arr1(float* pb, float* pc, int n){
	int j,k;
    for(j = 0; j < n; j++)
        printf("%f ", pb[j]);

    for(k = 0; k < n; k++)
        printf("%f ", pc[k]);
}
