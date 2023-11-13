 #include<stdio.h>
 #include<stdlib.h>
 void selection_sort(int arra[], int n){
     int i, index;
     for (i = 0; i < n-1; i++)
     {
         index = i;
         for (int j = i+1; j < n; j++)
         {
             if (arra[index] > arra[j])
                index = j;
         }
         if (index != i)
         {
             int temp = arra[i];
             arra[i] = arra[index];
             arra[index] = temp;
         }
     }
 }
 int main()
 {
     int arra[100];
     int n, i, index;
     scanf("%d", &n);

     for (i = 0; i < n; i++)
     {
         scanf("%d", &arra[i]);
     }
     selection_sort(arra, n);

     for (i = 0; i < n; i++)
     {
         printf("%d ", arra[i]);
     }
 }
