//
//  EMEncodeHandle.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMVideoOutConfig.h"
#import "EMAudioOutConfig.h"
#import "EMVideoEncoder.h"
#import "EMAudioEncoder.h"

NS_ASSUME_NONNULL_BEGIN

//编码器工具类，他来管理音频和视频的编码器
@interface EMEncodeHandle : NSObject

@property (nonatomic, readonly, strong) EMVideoEncoder *videoEncoder;
@property (nonatomic, readonly, strong) EMAudioEncoder *audioEncoder;

//初始化
//audioConfig：音频配置，采用默认音频编码器（硬编码）
//videoEncoder：自定义视频编码器
- (instancetype)initWithDefaultAudioConfig:(EMAudioOutConfig *) audioConfig videoEncoder:(EMVideoEncoder*)videoEncoder;

//初始化
//videoConfig：视频配置，采用默认视频编码器（硬编码）
//audioEncoder：自定义音频编码器
- (instancetype)initWithDefaultVideoConfig:(EMVideoOutConfig *) videoConfig audioEncoder:(EMAudioEncoder*)audioEncoder;

//初始化
//videoEncoder：自定义视频编码器
//audioEncoder：自定义音频编码器
- (instancetype)initWithVideoEncoder:(EMVideoEncoder*)videoEncoder audioEncoder:(EMAudioEncoder*)audioEncoder;

//初始化
//audioConfig：音频配置，采用默认音频编码器（硬编码）
//videoConfig：视频配置，采用默认视频编码器（硬编码）
- (instancetype)initWithAudioConfig:(EMAudioOutConfig *) audioConfig videoConfig:(EMVideoOutConfig *) videoConfig;

//打开所有编码器
- (void)openEncoder;

//关闭所有编码器
- (void)closeEncoder;



@end

NS_ASSUME_NONNULL_END
