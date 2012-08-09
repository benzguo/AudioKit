//
//  OCSFileInput.h
//  Objective-C Sound
//
//  Created by Aurelius Prochazka on 6/28/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import "OCSOpcode.h"

/** Reads stereo audio data from a file.
 
 AOP Not complete.
 
 http://www.csounds.com/manual/html/diskin2.html
 */

@interface OCSFileInput : OCSOpcode

/// @name Properties

/// The output to the left channel.
@property (nonatomic, strong) OCSParameter *leftOutput;
/// The output to the right channel.
@property (nonatomic, strong) OCSParameter *rightOutput;


/// @name Initialization

/// Create a file input.
/// @param fileName Location of the file on disk.
- (id)initWithFilename:(NSString *)fileName;

@end