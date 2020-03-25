#include<stdio.h>
#include"server.h"
#include<stdlib.h>

void main(){
    HEAD = NULL;
    while(1){
        char sel;
        int dat;
        printf("\n\nLINKED LIST\n1. Display List\n2. Insert at front\n3. Insert at end\n4. Sum of Alternate nodes\n5. Sum of nodes\n6. Sum of even and odd nodes\n7. Exit\nMake your choice:\n");
        scanf(" %c",&sel);
        switch (sel)
        {
        case '1':
            display_list();
            break;
        
        case '2':
            printf("Enter data to insert at beginning:\n");
            scanf("%d",&dat);
            insert_beg(dat);
            display_list();
            break;
        
        case '3':
            printf("Enter data to insert at end:\n");
            scanf("%d",&dat);
            insert_end(dat);
            display_list();
            break;

        case '4':
            printf("Sum of alternate nodes:\n");
            sum_alternate();
            break;
        
        case '5':
            printf("Sum of nodes:\n");
            sum();
            break;
        
        case '6':
            printf("Sum of Odd and even nodes:\n");
            sum_eo();
            break;
        
        case '7':
            printf("Exiting...\n");
            exit(0);
            break;
        

        default:
            printf("Choose Correct Option... \n");
            break;
        }
    }
}