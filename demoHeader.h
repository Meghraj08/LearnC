/// with parameter with return
float si1(float P,float R,float N)
{
    return (P*R*N)/100;
}

/// with parameter without return
void si2(float P,float R,float N)
{
    printf("S I is %f",((P*R*N)/100));
}

/// without parameter with return
float si3()
{
    float P,R,N;
    printf("Enter P");
    scanf("%f",&P);
    printf("Enter R");
    scanf("%f",&R);
    printf("Enter N");
    scanf("%f",&N);
    return (P*R*N)/100;
}

/// without parameter without return
void si4()
{
    float P,R,N;
    printf("Enter P");
    scanf("%f",&P);
    printf("Enter R");
    scanf("%f",&R);
    printf("Enter N");
    scanf("%f",&N);
    printf("S I is %f",((P*R*N)/100));
}
