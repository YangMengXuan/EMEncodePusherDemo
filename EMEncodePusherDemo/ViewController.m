//
//  ViewController.m
//  EMEncodePusherDemo
//
//  Created by 恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import "ViewController.h"
#import <EMEncodePusher/EMEncodePusher.h>
#import <EMEncodePusher/EMAudioEncoder.h>
#import <EMEncodePusher/EMRtmpData.h>
#import <EMEncodePusher/EMRtmpHandle.h>
#import <EMEncodePusher/EMEncodeHandle.h>
#import <EMEncodePusher/EMVideoEncoder.h>
#import <EMEncodePusher/EMVideoOutConfig.h>
#import <EMEncodePusher/EMAudioOutConfig.h>


@interface ViewController ()<EMRtmpHandleDelegate>
{
    EMRtmpHandle *_pusherHandle;
    EMEncodeHandle *_encodeHandle;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    //基本用法,采用默认编码器推流
    EMVideoOutConfig *_videoConfig = [[EMVideoOutConfig alloc] init];
    _videoConfig.width = 640;
    _videoConfig.height = 480;
    _videoConfig.bitrate = 2638400;
    _videoConfig.fps = 15;
    
    EMAudioOutConfig *_audioConfig = [[EMAudioOutConfig alloc] init];
    _audioConfig.bitrate = 100000;
    _audioConfig.channelCount = 1;
    _audioConfig.sampleSize = 16;
    _audioConfig.sampleRate = 48000;
    _audioConfig.inSampleRate = 44100;
    
    //初始化编码器
    _encodeHandle = [[EMEncodeHandle alloc] initWithAudioConfig:_audioConfig videoConfig:_videoConfig];
    //初始化推流器
    _pusherHandle = [[EMRtmpHandle alloc] initWithEncoderHandle:_encodeHandle];
    _pusherHandle.delegate = self;
    
    //连接rtmp服务
    //[_pusherHandle startWithRtmpURL:@""];
    
    //推音频数据
    //_pusherHandle encodeAndSendWithAudioData:<#(nonnull NSData *)#>
    //推视频数据
    //_pusherHandle encodeAndSendWithVideoData:<#(nonnull NSData *)#>
    
    
    
}

- (void) handle:(EMRtmpHandle *)handle changeState:(EMRtmpHandleState) changeState {
    
}


@end
