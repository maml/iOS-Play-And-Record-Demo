//
//  AudioSessionManager.h
//  iOS-Play-And-Record-Demo
//
//  Created by Matthew Loseke on 2/24/14.
//  Copyright (c) 2014 Matthew Loseke. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AudioSessionManager : NSObject

+ (void)setAudioSessionCategory: (NSString *)categoryConstant;

@end
