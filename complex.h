typedef struct complex
{
  double real; 
  double imaginary; 
} COMPLEX;

typedef COMPLEX* CPTR;

COMPLEX CreateComplex(double real, double imaginary);
void DestroyComplex(CPTR complex);
COMPLEX AddComplex(CPTR first, CPTR second);
COMPLEX SubtractComplex(CPTR first, CPTR second);
COMPLEX MultiplyComplex(CPTR first, CPTR second);
COMPLEX ConjugateComplex(CPTR complex);
COMPLEX DivideComplex(CPTR first, CPTR second);
void PrintComplex(CPTR complex);