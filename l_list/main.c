#include<stdio.h>
#include<stdlib.h>
#include"l_l.h"

void main(){
    HEAD = NULL;
    char sel;
    while(1){
        printf("LINKEDLIST\n1. Insert Before\n2. Insert After\n3. Insert At\n4. Delete Before\n5. Delete After\n6. Delete at\n7. Sort\n8. Search\n9. Display List\nq. Exit\nEnter Choice: ");
        scanf(" %c", &sel);
        int info;
        int pos;
        switch (sel)
        {
        case '1':
            printf("Enter data:\n");
            scanf("%d",&info);
            insert_beg(info);
            display_list();
            break;

        case '2':
            printf("Enter data:\n");
            scanf("%d",&info);
            insert_after(info);
            display_list();
            break;

        case '3':
            printf("Enter data:\n");
            scanf("%d",&info);
            printf("Enter position:\n");
            scanf("%d",&pos);
            insert_at(info,pos);
            display_list();
            break;

        case '4':
            printf("Deleting Beginning: \n");
            delete_beg();
            display_list();
            break;

        case '5':
            printf("Deeleting End:\n");
            delete_end();
            display_list();
            break;

        case '6':
            printf("Enter position:\n");
            scanf("%d",&pos);
            delete_at(pos);
            display_list();
            break;

        case '7':
            printf("Sorting List:\n");
            sort_list();
            display_list();
            break;

        case '8':
            printf("Enter item to be searched: \n");
            scanf("%d",&info);
            search_list(info);
            break;

        case '9':
            display_list();
            break;


        case 'q':
            exit(0);
        
        default:
            printf("\nWrong Selection.\n");
            break;
        }
    }
}