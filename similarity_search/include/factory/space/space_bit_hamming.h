/**
 * Non-metric Space Library
 *
 * Authors: Bilegsaikhan Naidan (https://github.com/bileg), Leonid Boytsov (http://boytsov.info).
 * With contributions from Lawrence Cayton (http://lcayton.com/).
 *
 * For the complete list of contributors and further details see:
 * https://github.com/searchivarius/NonMetricSpaceLib 
 * 
 * Copyright (c) 2014
 *
 * This code is released under the
 * Apache License Version 2.0 http://www.apache.org/licenses/.
 *
 */

#include "searchoracle.h"
#include "space/space_bit_hamming.h"

namespace similarity {

/*
 * Creating functions.
 */

inline Space<int>* CreateBitHamming(const AnyParams& /* ignoring params */) {
  return new SpaceBitHamming();
}

/*
 * End of creating functions.
 */


}
