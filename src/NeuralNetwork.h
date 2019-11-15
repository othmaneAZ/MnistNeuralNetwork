

#include <iostream>
#include "hLayer.h"
#include "outLayer.h"
#include "mnistLoader.h"


/*

#ifndef NEURALNETWORK_MNIST_MYNET_H
#define NEURALNETWORK_MNIST_MYNET_H
#endif NEURALNETWORK_MNIST_MYNET_H


#include <vector>
#include <random>
#include <thread>
#include <string>




class myNet{
	private: 
		std::vector<std::vector<std::vector<long double> > > w;		//3d Weights matrix
		std::vector<std::vector<long double> > b;					//2d Biases matrix
		unsigned long l;			  								//Number of layers
		std::vector<unsigned long> n; 								//Number of neurons in each layer
	public:
		static double learningRate;

		myNet(std::vector<unsigned long> n, long double _learningRate);	
		myNet(std::vector<unsigned long> n, 
			  long double weight,
			  long double bias,
			  long double _learningRate);

		void printWeights();

		void sigmoid(double z, double& out_x);

		void softmax(double *z, double* out_x, int size);

		void printBiases();

		long double applyActivation(long double h, std::string actFunct);

		long double derivActivation(long double h);

		void computeCost(std::vector<long double> &y,
						 std::vector<long double> &yHat,
						 std::vector<long double> &output);
		void forProp(std::vector<long double> &data);
		void backProp(std::vector<long double> &trainLabel,
					  std::vector<long double> &trainData ,
					  std::vector<std::vector<std::vector<long double>>> &dW,
					  std::vector<std::vector<long double>> &dB);
		void gradientDescent(long double _learningRate, 
							 std::vector<std::vector<long double>> &trainData,
							 std::vector<std::vector<long double>> &labels);
};	

*/