#ifndef INPARS_H
#define INPARS_H

/* input parameters */
typedef struct {
  double radius,minScale,tcmb,*nMolWeights,*dustWeights;
  int sinkPoints,pIntensity,blend,*collPartIds;
  char *outputfile,*binoutputfile;
//  char *inputfile; unused at present.
  char *gridfile;
  char *pregrid;
  char *restart;
  char *dust;
  int sampling,lte_only,init_lte,antialias,polarization,nThreads;
  char **moldatfile;
} inputPars;

#endif /* INPARS_H */