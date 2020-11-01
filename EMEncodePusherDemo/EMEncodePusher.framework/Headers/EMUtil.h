//
//  EMUtil.h
//  EMEncodePusher
//
//  Created by 恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EMUtil : NSObject

//创建一个YUV格式的data
+ (NSData*)createYUVDataWithColor:(UIColor*)color size:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
