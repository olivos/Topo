//============================================================================
// Name        : Topologie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <armadillo>
#include <vector>

#include <math.h>

#include "vecSpace.h"
#include "realSpace.h"
#include "fun.h"
#include "vfun.h"
#include "ed.h"
#include "brw.h"
#include "stoch.h"
#include "func.h"
#include "bs.h"
#include "euCall.h"
#include "Ndist.h"
#include "outputC.h"
#include "input.h"
#include "Hedging.h"
#include "stocks.h"

using namespace arma;
using namespace std;
using namespace vSpace;

double f (double x){
	return log(x/2902.54);
}

int main() {
	stocks S = stocks("/Users/oliv/Documents/ColumbiaMSOR/OptionMetrics/spxibm.csv","/Users/oliv/Documents/ColumbiaMSOR/OptionMetrics/spxibmVol.csv",2,120);
	cout << S.getData()<<"\n";
	cout << S.getPrices();
	return 0;
}
