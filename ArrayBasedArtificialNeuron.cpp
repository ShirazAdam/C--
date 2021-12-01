#include <stdio.h>

#define	NN 3   // number of neurons

// let's define a transfer function (or threshold) for the output neuron
float phi(float sum)
{
  return sum ;   // linear transfer function f(sum)=sum
}

int main()
{

 float a[NN+1];  // activaty of each neurons

 float w[NN+1][NN+1];  // weight of links between each neurons

 //let's define activity of two input neurons (a0, a1) and one output neuron (a2)

 a[0] = 0.0;
 a[1] = 1.0;
 a[2] = 0;

 //let's define weights of signals comes from two input neurons to output neuron (0 to 2 and 1 to 2)

 w[0][2] = 0.3;
 w[1][2] = 0.2;


 // Let's fire our artificial neuron activity, output will be
 a[2] = phi( a[0]*w[0][2] + a[1]*w[1][2] );

 printf("%10.6f\n", a[2]);
 getchar();

 return 0;
}
