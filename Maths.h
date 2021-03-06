float Factorial(float input) {
    return input * (input - 1);
}

unsigned fastmod(unsigned int x, unsigned int y)
{
  return y & (y-1) ? x % y : x & (y-1);
}

float Expon(float input, float exp) {
    float placeHolder = 1;
    for(int i = 1; i < input; i++) {
        placeHolder *= input;
    }
    return placeHolder;
}
float Cosine(float input) {
    float returnval;
    float sum=1, t=1;
    
    for(int i=1;i<=80;i++)
    {
        t=t*(-1)*input*input/(2*i*(2*i-1));
        sum=sum+t;
    }
    return sum;
}

float Sine(float input) {
    float returnval;
    float sum=1, t=1;
    for(int i=1;i<=80;i++)
    {
        t=t*(-1)*input*input/(2*i*(2*i+1));
        sum=sum+t;
    }
    return sum;
}

float Tangent(float input) {
    float s = Sine(input);
    float c = Cosine(input);

    return s*c;
}

float Cotangent(float input) {
    return Cosine(input)/Sine(input);
}

float Secant(float input) {
    float returnval;
    float sum=1, t=1;
    for(int i=1;i<=80;i++)
    {
        t=t*(-1)*input*input/(2*i*(2*i-1));
        sum=sum+t;
    }
    return 1/sum;
}

float Cosecant(float input) {
    float returnval;
    float sum=1, t=1;
    for(int i=1;i<=80;i++)
    {
        t=t*(-1)*input*input/(2*i*(2*i+1));
        sum=sum+t;
    }
    return 1/sum;
}
