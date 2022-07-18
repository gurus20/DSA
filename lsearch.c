// #include <stdio.h>
// #include <conio.h>

// int search;
// int flag;

// int input(int *, int, int);
// void linear_search(int *, int, int);
// void display(int *, int);

// void linear_search(int m[], int n, int el)
// {
//     int k;
//     flag = 1;
//     for (k = 0; k < n; k++)
//     {
//         if(m[k]==el)
//         {
//             printf("\n Search is Successful\n");
//             printf("\n Element: %i Found at location : %i", element, k + 1);
//             flag = 0;   
//         }      
//     }
//     if (flag == 1)
//         printf("\n Search is unsuccessful");
// }

// void display(int m[], int n)
// {
//     int i;
//     for (i = 0; i < 20; i++)
//     {
//  printf("%d", m[i];
//     }
// }

// int input(int m[], int n, int el)
// {
//     int i;
//     n = 20;
//     el = 30;
//     printf("Number of elements in the list
//            : % d", n);
//     for (i = 0; i < 20; i++)
//     {
//         m[i] = rand() % 100;
//     }
//     printf("\n Element to be searched
//            : % d", el);
//     search = el;
//     return n;
// }

// /* Main Function*/
// void main()
// {
//     int n, el, m[200];
//     number = input(m, n, el);
//     el = search;
//     printf("\n Entered list as follows: \n");
//     display(m, n);
//     linear_search(m, n, el);
//     printf("\n In the following list\n");
//     display(m, n);
// }