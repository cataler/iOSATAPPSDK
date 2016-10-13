//
//  NSString+ATExtend.h
//  ATSCTX
//
//  Created by CaiAntao on 16/8/27.
//  Copyright © 2016年 CaiAntao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (ATExtend)

- (BOOL)isEmpty;

+ (NSString *)atNetworking_md5:(NSString *)string;

+ (NSString *)keyValueToStringWithDic:(NSDictionary *)dic;

- (NSMutableDictionary *)getURLParameters;

@end
