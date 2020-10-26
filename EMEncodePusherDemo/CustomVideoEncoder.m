//
//  CustomVideoEncoder.m
//  EMEncodePusherDemo
//
//  Created by 恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import "CustomVideoEncoder.h"

#import <EMEncodePusher/EMVideoOutConfig.h>
#import <EMEncodePusher/EMAudioOutConfig.h>
#import <EMEncodePusher/EMRtmpData.h>

@interface CustomVideoEncoder()
{
    void* _h264BodyData;
    void* _h264HeadData;
}

@end

@implementation CustomVideoEncoder



//打开编码器
-(void) openEncoder {
    
}
//关闭解码器
-(void) closeEncoder {
    
}
//错误信息回调
-(void) onErrorWithCode:(EMEncoderErrorCode) code des:(NSString *) des {
    
}
//创建一个RTMP传输中的videoBody数据
-(void*) createEncoderBodyWithData:(NSData*) data {
    
    resetRtmpBaseData(&_h264BodyData);
    //根据具体情况传参数
    memcpyRtmpBaseData(&_h264BodyData, NULL, 0);
    
    //第一种写法
    return createRtmpVideoBodyTag2(_h264BodyData, 0, 0, 1);
    
    //第二种写法
    //uint8_t *bdata = getRtmpBaseDataByte(_h264BodyData);
    //uint32_t size = getRtmpBaseDataSize(_h264BodyData);
    //return createRtmpVideoBodyTag(bdata, size, 0, 0, 1);
    
}
//创建一个RTMP传输中的videoHead数据
-(void*) createEncoderHeader {
    //根据具体情况传参数
    _h264HeadData = createRtmpVideoHeadData(NULL, 0, NULL, 0);
    return createRtmpVideoHeadTag(_h264HeadData);
    
}

@end
