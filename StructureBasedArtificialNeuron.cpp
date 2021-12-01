#include <stdio.h>

#define	NN 3   // number of neurons

float phi(float sum)
{
  return sum ;   // linear transfer function f(sum)=sum
}

struct st_neuron
{
  float a;   // activaty of each neurons
  float w[NN+1];   // weight of links between each neurons
  float phi;   // threshold value of each neurons for the activity output
};

struct st_neuron n[NN+1];

int main()
{
 //let's define activity of two input neurons (a0, a1) and one output neuron (a2)

 n[0].a = 0.0;
 n[1].a = 1.0;
 n[2].a = 0;

 //let's define weights of signals comes from two input neurons to output neuron (0 to 2 and 1 to 2)

 n[0].w[2] = 0.3;
 n[1].w[2] = 0.2;


 // Let's fire our artificial neuron activity, output will be
 n[2].a = phi(n[0].a*n[0].w[2] + n[1].a*n[1].w[2]);

 printf("%10.6f\n", n[2].a);
 getchar();

 return 0;
}
