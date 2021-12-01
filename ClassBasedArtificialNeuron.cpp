#include <stdio.h>

#define	NN 2   // number of neurons

class Tneuron    // neuron class
{
  public:
   float a;       // activity of each neurons
   float w[NN+1]; // weight of links between each neurons

   Tneuron()
   {
 a=0;
 for(int i=0; i<=NN; i++) w[i]=-1;  // if weight is negative there is no link
   }

   // let's define an activation function (or threshold) for the output neuron
   float activation_function(float sum)
   {
   return sum ;   // linear transfer function f(sum)=sum
   }
};

Tneuron ne[NN+1];   // neuron objects

void fire(int nn)
{
   float sum = 0;

   for ( int j=0; j<=NN; j++ )
   {
    if( ne[j].w[nn]>=0 ) sum += ne[j].a*ne[j].w[nn];
   }

   ne[nn].a = ne[nn].activation_function(sum);
}

int main()
{
 //let's define activity of two input neurons (a0, a1) and one output neuron (a2)

 ne[0].a = 0.0;
 ne[1].a = 1.0;
 ne[2].a = 0;

 //let's define weights of signals comes from two input neurons to output neuron (0 to 2 and 1 to 2)

 ne[0].w[2] = 0.3;
 ne[1].w[2] = 0.2;


 // Let's fire our artificial neuron activity, output will be
 fire(2);

 printf("%10.6f\n", ne[2].a);
 getchar();
 return 0;
}

/*
    void fire(int nn)
    {
       float sum = 0;

       for ( int j=0; j<=NN; j++ )
       {
    	if( ne[j].w[nn]>=0 ) sum += ne[j].a*ne[j].w[nn];
       }

	   ne[nn].a = ne[nn].activation_function(sum);
	}
*/
