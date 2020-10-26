//
//  EMVideoOutConfig.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EMVideoOutConfig : NSObject<NSCopying>

//编码后的输出视频宽度
@property (nonatomic, unsafe_unretained) NSInteger width;

//编码后的输出视频高度
@property (nonatomic, unsafe_unretained) NSInteger height;

//编码后的输出视频码率
@property (nonatomic, unsafe_unretained) NSInteger bitrate;

//编码后的输出视频帧率
@property (nonatomic, unsafe_unretained) NSInteger fps;

@end

NS_ASSUME_NONNULL_END
