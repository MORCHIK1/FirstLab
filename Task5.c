void create_arr5(float***, int*, int*);
void input_arr5(float** , int, int);
void arrange_arr5(float**, int, int);
//void arrange_arr_col(float**, int, int);
void output_arr5(float** ,int,int);

void runtask_5(){
    float** pa;
    int n,m,i;

    create_arr5(&pa, &n, &m);
    if(pa){
        input_arr5(pa, n, m);
        arrange_arr5(pa, n ,m);
        //arrange_arr_col(pa, n ,m);
        output_arr5(pa, n, m);
        for(i=0; i<n; i++){
            free(pa[i]);
        }
        free(pa);
    }
    if(!pa) printf("Memory allocation failed");
}

void create_arr5(float*** pa, int* pn, int* pm){
    int i;
    printf("n = ");
    scanf("%d", pn);
    printf("m = ");
    scanf("%d", pm);

    *pa = (float**)malloc((*pn) * sizeof(float*));
    for(i=0; i<*pn; i++){
        (*pa)[i]=(float*)malloc((*pm) * sizeof(float));
    }
}

void input_arr5(float** pa, int n, int m){
    printf("\nInput: ");
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        scanf("%f", &pa[i][j]);
}

void arrange_arr5(float** pa, int n, int m){
    int i,j,temp;
    for(i=0; i<n; i++){
        for (int step = 0; step < n - 1; ++step) {
            for(j=0; j<m-step-1; j++){
                if(pa[i][j]>pa[i][j+1]){
                    temp=pa[i][j+1]; 
                    pa[i][j+1]=pa[i][j]; 
                    pa[i][j]=temp;
                }
            }
        }
    }
}

/*void arrange_arr_col(float** pa, int n, int m){
    int i,j,temp;
    for(j=0; j<m; j++){
        for (int step = 0; step < m - 1; ++step) {
            for(i=0; i<n-step-1; i++){
                if(pa[i][j]>pa[i+1][j]){
                    temp=pa[i+1][j]; 
                    pa[i+1][j]=pa[i][j]; 
                    pa[i][j]=temp;
                }
            }
        }
    }
}*/



void output_arr5(float** pa, int n, int m){
    int i,j;
    printf("\nOutput: ");
    for(i = 0; i < n; i++){
        printf("\n");
        for(j = 0; j < m; j++)
        printf("%.2f ",pa[i][j]);
        }
}