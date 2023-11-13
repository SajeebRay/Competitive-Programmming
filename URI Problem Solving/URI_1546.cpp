#include <stdio.h>
int main() {
    int t;
    scanf("%i", &t);

    int i;
    while(t--) {
        int Feedbacks;
        scanf("%i", &Feedbacks);
        int j;
        int feed;
        while(Feedbacks--){
            scanf("%i", &feed);
            switch (feed) {
                case 1: printf("Rolien");
                    break;
                case 2: printf("Naej");
                    break;
                case 3: printf("Elehcim");
                    break;
                case 4: printf("Odranoel");
                    break;

                default:
                    break;
            }
            printf("\n");
        }
    }
}
