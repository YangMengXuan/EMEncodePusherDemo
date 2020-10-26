//
//  EMRtmpHandle.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMEncodeHandle.h"
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    EMRtmpStateIdle,
    EMRtmpStateConnecting,
    EMRtmpStateOpened,
    EMRtmpStateConnected,
    EMRtmpStateClosed,
    EMRtmpStateErrorErite,
    EMRtmpStateErrorOpen,
    EMRtmpStateErrorNet
} EMRtmpHandleState;


@class EMRtmpHandle;
@protocol EMRtmpHandleDelegate <NSObject>

//rtmp连接情况回调
//handle：句柄
//changeState：状态值
- (void) handle:(EMRtmpHandle *)handle changeState:(EMRtmpHandleState) changeState;
@end

//Rtmp的传输工具类，提供推流功能
@interface EMRtmpHandle : NSObject
//编码器
@property (nonatomic,strong,readonly) EMEncodeHandle *encodeHandle;
//回调
@property (nonatomic, weak) id<EMRtmpHandleDelegate> delegate;
//rtmp是否在连接状态
@property (nonatomic, unsafe_unretained) BOOL isRtmpConnect;;

//初始化方法
//encodeHandle：编码器
- (instancetype)initWithEncoderHandle:(EMEncodeHandle*)encodeHandle;

//开始连接Rtmp地址
- (BOOL)startWithRtmpURL:(NSString *)rtmpUrl;
//断开连接
- (void)stopRtmp;

//编码一个视频的原始数据（yuv），编码后并同时推流
- (void)encodeAndSendWithVideoData:(NSData*)data;

//编码一个音频的原始数据（pcm），编码后并同时推流
- (void)encodeAndSendWithAudioData:(NSData*)data;




@end

NS_ASSUME_NONNULL_END
