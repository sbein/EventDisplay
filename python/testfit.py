#   Example of a fitting program
#   ============================
#
#   The fitting function fcn is a simple chisquare function
#   The data consists of 5 data points (arrays x,y,z) + the errors in errorsz
#   More details on the various functions or parameters for these functions
#   can be obtained in an interactive ROOT session with:
#    Root > TMinuit *minuit = new TMinuit(10);
#    Root > minuit->mnhelp("*",0)  to see the list of possible keywords
#    Root > minuit->mnhelp("SET",0) explains most parameters


from ROOT import *
from array import array;


