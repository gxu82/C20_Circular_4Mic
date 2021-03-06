#ifndef AUDIO_ALGORITHMS_FILTERBANKPARAMS_H
#define AUDIO_ALGORITHMS_FILTERBANKPARAMS_H

#include "awi_filterbank.h"
#include "awi_constant.h"

#if AWI_BAND_COUNT == BAND_COUNTS_32

#define AWI_DECI_RATE DECI_RATE_32
#define AWI_FB_FRAME_LENGTH FRAME_LENGTH_32
#define AWI_ANA_FILTER_LENGTH ANA_FILTER_LENGTH_32
#define AWI_SYN_FILTER_LENGTH ANA_FILTER_LENGTH_32
#define AWI_FRAME_BAND_COUNT FRAME_BAND_COUNTS_32
#define AWI_FRAME_PER_BLOACK (AWI_FB_FRAME_LENGTH/AWI_DECI_RATE)
#define AWI_ANA_FILTER FILTER_32
#define AWI_SYN_FILTER FILTER_32

#elif AWI_BAND_COUNT == BAND_COUNTS_64

#define AWI_DECI_RATE DECI_RATE_64
#define AWI_FB_FRAME_LENGTH FRAME_LENGTH_64
#define AWI_ANA_FILTER_LENGTH ANA_FILTER_LENGTH_64
#define AWI_SYN_FILTER_LENGTH ANA_FILTER_LENGTH_64
#define AWI_FRAME_BAND_COUNT FRAME_BAND_COUNTS_64
#define AWI_FRAME_PER_BLOACK (AWI_FB_FRAME_LENGTH/AWI_DECI_RATE)
#define AWI_ANA_FILTER FILTER_64
#define AWI_SYN_FILTER FILTER_64

#elif AWI_BAND_COUNT == BAND_COUNTS_128

#define AWI_DECI_RATE DECI_RATE_128
#define AWI_FB_FRAME_LENGTH FRAME_LENGTH_128
#define AWI_ANA_FILTER_LENGTH ANA_FILTER_LENGTH_128
#define AWI_SYN_FILTER_LENGTH ANA_FILTER_LENGTH_128
#define AWI_FRAME_BAND_COUNT FRAME_BAND_COUNTS_128
#define AWI_FRAME_PER_BLOACK (AWI_FB_FRAME_LENGTH/AWI_DECI_RATE)
#define AWI_ANA_FILTER FILTER_128
#define AWI_SYN_FILTER FILTER_128

#elif AWI_BAND_COUNT == BAND_COUNTS_256

#define AWI_DECI_RATE DECI_RATE_256
#define AWI_FB_FRAME_LENGTH FRAME_LENGTH_256
#define AWI_ANA_FILTER_LENGTH ANA_FILTER_LENGTH_256
#define AWI_SYN_FILTER_LENGTH ANA_FILTER_LENGTH_256
#define AWI_FRAME_BAND_COUNT FRAME_BAND_COUNTS_256
#define AWI_FRAME_PER_BLOACK (AWI_FB_FRAME_LENGTH/AWI_DECI_RATE)
#define AWI_ANA_FILTER FILTER_256
#define AWI_SYN_FILTER FILTER_256

#elif  AWI_BAND_COUNT == BAND_COUNTS_512

#define AWI_DECI_RATE DECI_RATE_512
#define AWI_FB_FRAME_LENGTH FRAME_LENGTH_512
#define AWI_ANA_FILTER_LENGTH ANA_FILTER_LENGTH_512
#define AWI_SYN_FILTER_LENGTH ANA_FILTER_LENGTH_512
#define AWI_FRAME_BAND_COUNT FRAME_BAND_COUNTS_512
#define AWI_FRAME_PER_BLOACK (AWI_FB_FRAME_LENGTH/AWI_DECI_RATE)
#define AWI_ANA_FILTER FILTER_512
#define AWI_SYN_FILTER FILTER_512

#endif

#endif //AUDIO_ALGORITHMS_FILTERBANKPARAMS_H
