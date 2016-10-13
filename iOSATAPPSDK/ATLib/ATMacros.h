//
//  ATMacros.h
//  iOSATAPPSDK
//
//  Created by CaiAntao on 2016/10/13.
//  Copyright © 2016年 CaiAntao. All rights reserved.
//

#ifndef ATMacros_h
#define ATMacros_h

#ifdef DEBUG
#define ATLog(s, ... ) NSLog( @"[%@ in line %d] ===============> %@", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
#else
#define ATLog(s, ... )
#endif

#define ATScreenHeight [UIScreen mainScreen].bounds.size.height
#define ATScreenWidth [UIScreen mainScreen].bounds.size.width

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self

#define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]

#define ATPathTemp                   NSTemporaryDirectory()
#define ATPathDocument               [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define ATPathCache                  [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]


#endif /* ATMacros_h */
