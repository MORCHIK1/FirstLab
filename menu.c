#include <stdio.h>
#include <stdlib.h>
void runtask_1();
void runtask_2();
void runtask_3();
void runtask_4();
void runtask_5();

void print_menu() {


    printf("\nList of tasks: ");
    printf("\n[1] Task 1");
    printf("\n[2] Task 2");
    printf("\n[3] Task 3");
    printf("\n[4] Task 4");
    printf("\n[5] Task 5");
    printf("\n[0] for exit");
}
   

void print_task(int task){
    if(task == 1) printf("\n1. Задано одновимірний масив А розміру 2N."
                         "Побудувати два масиви В і С розміру N, включивши у масив В елементи масиву А з парними індексами, а у С - з непарними\n");
    else if(task == 2) printf("\nЗнайти мінімальне значення додатних елементів,"
                              " розташованих правіше першого елемента, рівного нулю. \n");
    else if(task == 3) printf("\nЗадано два масиви цілих чисел A n , n ≤ 300, B m , m ≤ 200.\n"
                              "Розробити програму, яка будує переріз цих масивів, \n"
                              "обчислює його суму і визначає максимальний елемент перерізу.\n");
    else if(task == 4) printf("\nДано одновимірний масив завдовжки n. Розділити його на два нових масиви так\n"
                              "Розділити його на два нових масиви таким чином,\n"
                              "щоб в першому опинились додатні елементи,\n"
                              "а в другому — від’ємні.\n");
    else if(task == 5) printf("\nДано натуральні числа n, m та дійсні числа, що утворюють прямокутну таблицю порядку n*m.\n"
                              "У таблиці впорядкувати за зростанням елементи:\n"
                              "1) в кожному рядку;\n"
                              "2) в кожному стовпчику.\n");   
}

void runtask(int task, int n){
    int k, res;
    while(1){
        print_menu();
        printf("\nChoose one of them: ");
        scanf("%d", &task);
        print_task(task);
        switch(task){
            case 1: runtask_1(); break;
            case 2: runtask_2(); break;
            case 3: runtask_3(); break;
            case 4: runtask_4(); break;
            case 5: runtask_5(); break;
            case 0:  return;
            default: printf("Invalid number of task"); break;
        }
    }
}
