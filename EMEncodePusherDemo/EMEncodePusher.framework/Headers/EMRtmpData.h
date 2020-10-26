//
//  EMRtmpData.h
//  EMEncodePusher
//
//  Created by 恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#ifndef EMRtmpData_h
#define EMRtmpData_h

#include <stdio.h>

//创建一个在Rtmp协议的基本数据类型
//size：数据大小
//return：返回Rtmp基本数据类型
extern void * allocRtmpBaseData(int size);

//获取一个在Rtmp协议的基本数据类型的字节数组
//baseData：已经分配的基本数据
extern uint8_t *getRtmpBaseDataByte (void *baseData);

//获取一个在Rtmp协议的基本数据类型的字节大小
//baseData：已经分配的基本数据
extern uint32_t getRtmpBaseDataSize(void *baseData);

//释放一个在Rtmp协议的基本数据类型,基本和allocRtmpBaseData函数成对出现
//baseData：已经分配的基本数据
extern void freeRtmpBaseData(void **baseData);

//深拷贝一个baseData数据
//baseData：复制后新数据地址
//fdata：被复制的数据
//size：被复制的数据大小
extern void memcpyRtmpBaseData(void **baseData, const void *fdata, int size);

//重置一个baseData数据，内容被清空
//baseData：需要被清空的数据
extern void resetRtmpBaseData(void **baseData);

//创建一个在RTMP协议可传输的videoBodyTag数据，
//h264_data：编码后数据的地址
//len：编码后数据的长度
//timeStamp：时间戳
//composition_time: 一般为0
//is_key_frame：是否是关键帧
//return：返回Rtmp传输时的videoBodyTag数据
extern void *createRtmpVideoBodyTag(int8_t *h264_data, long len, uint32_t timeStamp, long composition_time, int8_t is_key_frame);

//创建一个在RTMP协议可传输的videoBodyTag数据，
//baseData：Rtmp基本数据类型
//timeStamp：时间戳
//composition_time: 一般为0
//is_key_frame：是否是关键帧
//return：返回Rtmp传输时的videoBodyTag数据
extern void *createRtmpVideoBodyTag2(void * baseData,uint32_t timeStamp, long composition_time, int8_t is_key_frame);

//创建一个在RTMP协议可传输的videoHeadTag数据，
//baseData:Rtmp基本数据类型
//return：返回Rtmp传输时的videoHeadTag数据
extern void *createRtmpVideoHeadTag(void *baseData);

//创建一个在RTMP中videoheadTag数据需要的baseData数据
//sps_bytes：sps的地址
//sps_len：sps的长度
//pps_bytes：pps地址
//pps_len：pps长度
//return：返回Rtmp基本数据类型
extern void *createRtmpVideoHeadData(uint8_t *sps_bytes, uint32_t sps_len, uint8_t *pps_bytes, uint32_t pps_len);



#endif /* EMRtmpData_h */
