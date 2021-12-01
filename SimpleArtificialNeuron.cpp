#include <iostream>

// let's define a transfer function (or threshold) for the output neuron
float phi(float sum)
{
  return sum ;   // linear transfer function f(sum)=sum
}


int main()
{
 //let's define activity of two input neurons (a0, a1) and one output neuron (a2)
 float a0 = 0.0, a1 = 1.0, a2 = 0;

 //let's define weights of signals comes from two input neurons to output neuron (0 to 2 and 1 to 2)
 float w02 = 0.3, w12 = 0.2;

 // Let's fire our artificial neuron to obtain activity by the transfer function, output will be
 std::cout << "Firing Output Neuon ...\n" ;
 a2 = phi(a0*w02 + a1*w12);

 std::cout << "Output Neuron Activation Value:" << a2 << '\n';

 getchar();
 return 0;
}
