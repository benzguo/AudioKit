//
//  OCSBandRejectButterworthFilter.h
//  Objective-C Sound
//
//  Auto-generated from scripts by Aurelius Prochazka on 12/26/13.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSAudio.h"
#import "OCSParameter+Operation.h"

/** A band-reject Butterworth filter.
 
 These filters are Butterworth second-order IIR filters. They offer an almost flat passband and very good precision and stopband attenuation.
 */

@interface OCSBandRejectButterworthFilter : OCSAudio

/// Instantiates the band reject Butterworth filter
/// @param audioSource     Input signal to be filtered.
/// @param centerFrequency Center frequency for each of the filters.
/// @param bandwidth       Bandwidth of the band-reject filters.
- (instancetype)initWithAudioSource:(OCSAudio *)audioSource
                    centerFrequency:(OCSControl *)centerFrequency
                          bandwidth:(OCSControl *)bandwidth;

@end