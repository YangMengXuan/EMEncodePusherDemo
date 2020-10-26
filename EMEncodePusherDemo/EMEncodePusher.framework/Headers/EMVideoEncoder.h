//
//  EMVideoEncoder.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import "EMBaseEncoder.h"
#import "EMVideoOutConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface EMVideoEncoder : EMBaseEncoder

@property (nonatomic, copy) EMVideoOutConfig *outConfig;

@end

NS_ASSUME_NONNULL_END
