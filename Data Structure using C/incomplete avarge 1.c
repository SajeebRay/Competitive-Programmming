int main()
{
    double A,B,MEDIA;

    scanf("%lf%lf",&A,&B);
    MEDIA=(A+B)/2;
    A=3.5;
    B=7.5;
    while(A<=10&&A>=0 && B<=10&&B>=0){
        printf("MEDIA = %.5lf",MEDIA);
    }

    return 0;

}
