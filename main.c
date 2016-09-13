 #include<stdio.h>
 #include<stdlib.h>
 
  int main()
  {
      int numero=0, invertido=0, modulo=0;
      
      printf ("ingrese un numero: ");
      scanf ("%d", &numero);
      
      while (numero!=0)
      {
          modulo=numero%10;
          invertido=invertido*10+modulo;
          numero=numero/10;
      }    
      
      
      invertido+=numero;
      printf ("El numero invertido es: %d\n", invertido);
    
      return 0;
  } 
