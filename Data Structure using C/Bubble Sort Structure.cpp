 //Bubble sort
 #include<stdio.h>
 int main()
 {
     int arra[100];
     int n, i;
     scanf("%d", &n);

     for (i = 0; i < n; i++)
     {
         scanf("%d", &arra[i]);
     }

     for (i = 1; i < n; i++)
     {
        int flag = 0;
         for (int j = 0; j < n-i; j++)
         {
             if (arra[j] > arra[j+1])
             {
                 int temp = arra[j];
                 arra[j] = arra[j+1];
                 arra[j+1] = temp;
                 flag = 1;
             }
         }
         if (flag == 0)
            break;
     }

     for (i = 0; i < n; i++)
     {
         printf("%d ", arra[i]);
     }
 }
