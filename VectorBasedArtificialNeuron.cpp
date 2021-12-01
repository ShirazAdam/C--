#include <iostream>
#include <vector>

#define	NN 3   // number of neurons

//------------------------------------------------------------------------------
// let's define a activation function (or transfer function, threshold) for the output neuron
float phi(float sum)
{
  return sum ;   // linear transfer function f(sum)=sum, you can use your own activation function here
}
//------------------------------------------------------------------------------
int main()
{
 std::vector<float> a;  // activity of each neurons in vector form
 std::vector< std::vector<float> > w;  // 2D vector definition for the weight of links between each neurons

 //let's define activity of two input neurons (a0, a1) and one output neuron (a2)
 a.resize(3);
 a[0] = 0.0;
 a[1] = 1.0;
 a[2] = 0;

 //let's define weights of signals comes from two input neurons to output neuron (0 to 2 and 1 to 2)
 w.resize(2);
 w[0].resize(3);   // we can resize each neuron connections
 w[1].resize(3);
 w[0][2] = 0.3;
 w[1][2] = 0.2;

 // Let's fire our artificial neuron activity, output will be
 a[2] = phi( a[0]*w[0][2] + a[1]*w[1][2] );

 std::cout << "Output Neuron Activation: " << a[2] << std::endl;
 getchar();

 return 0;
}
