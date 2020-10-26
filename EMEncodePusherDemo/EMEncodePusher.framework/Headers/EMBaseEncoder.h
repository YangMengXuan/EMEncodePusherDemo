//
//  EMBaseEncoder.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    EMEncoderVTSessionCreateFailed,
    EMEncoderVTSessionPrepareFailed,
    EMEncoderLockSampleBaseAddressFailed,
    EMEncoderEncodeVideoFrameFailed,
    EMEncoderEncodeCreateBlockBufFailed,
    EMEncoderEncodeCreateSampleBufFailed,
    EMEncoderEncodeGetSpsPpsFailed,
    EMEncoderEncodeGetH264DataFailed,
    EMEncoderCreateAudioConverterFailed,
    EMEncoderAudioConverterGetMaxFrameSizeFailed,
    EMEncoderAudioEncoderFailed,
} EMEncoderErrorCode;

//基础编码器，可用于扩展，子类实现他的所有方法
@interface EMBaseEncoder : NSObject

//打开编码器
-(void) openEncoder;
//关闭解码器
-(void) closeEncoder;
//错误信息回调
-(void) onErrorWithCode:(EMEncoderErrorCode) code des:(NSString *) des;
//创建一个RTMP传输中的videoBody数据
-(void*) createEncoderBodyWithData:(NSData*) data;
//创建一个RTMP传输中的videoHead数据
-(void*) createEncoderHeader;


@end

NS_ASSUME_NONNULL_END
