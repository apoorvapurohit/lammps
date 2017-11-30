#ifdef COMPUTE_CLASS

ComputeStyle(HMA,ComputeHMA)

#else

#ifndef LMP_COMPUTE_HMA_H
#define LMP_COMPUTE_HMA_H

#include "compute.h"

namespace LAMMPS_NS {

class ComputeHMA : public Compute {
 public:
   ComputeHMA(class LAMMPS *, int, char **);
  ~ComputeHMA();
