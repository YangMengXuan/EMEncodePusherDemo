//
//  EMAudioOutConfig.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EMAudioOutConfig : NSObject<NSCopying>

//编码后的输出音频码率
@property (nonatomic, unsafe_unretained) NSInteger bitrate;

//编码后的输出音频声道数
@property (nonatomic, unsafe_unretained) NSInteger channelCount;

//编码后的输出音频采样率
@property (nonatomic, unsafe_unretained) NSInteger sampleRate;

//编码前的输入音频采样率
@property (nonatomic, unsafe_unretained) NSInteger inSampleRate;

//音频采样位数
@property (nonatomic, unsafe_unretained) NSInteger sampleSize;

@end

NS_ASSUME_NONNULL_END
