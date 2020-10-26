//
//  EMAudioEncoder.h
//  EMEncodePusher
//
//  Created by  恶魔的眼泪 on 2020/10/5.
//  Copyright © 2020 YangMengXuan. All rights reserved.
//

#import "EMBaseEncoder.h"
#import "EMAudioOutConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface EMAudioEncoder : EMBaseEncoder

@property (nonatomic, copy) EMAudioOutConfig *outConfig;

@end

NS_ASSUME_NONNULL_END
