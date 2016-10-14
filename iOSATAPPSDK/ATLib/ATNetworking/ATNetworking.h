//
//  ATNetworking.h
//  ATSCTX
//
//  Created by CaiAntao on 16/8/27.
//  Copyright © 2016年 CaiAntao. All rights reserved.
//
#ifndef ATNetworking_h
#define ATNetworking_h

typedef void (^HYBDownloadProgress)(int64_t bytesRead,
                                    int64_t totalBytesRead);
typedef HYBDownloadProgress HYBGetProgress;
typedef HYBDownloadProgress HYBPostProgress;

/*!
 *  @author 黄仪标, 16-01-08 14:01:26
 *
 *  上传进度
 *
 *  @param bytesWritten              已上传的大小
 *  @param totalBytesWritten         总上传大小
 */
typedef void (^HYBUploadProgress)(int64_t bytesWritten,
                                  int64_t totalBytesWritten);

typedef NS_ENUM(NSUInteger, HYBResponseType) {
    kHYBResponseTypeJSON = 1, // 默认
    kHYBResponseTypeXML  = 2, // XML
    // 特殊情况下，一转换服务器就无法识别的，默认会尝试转换成JSON，若失败则需要自己去转换
    kHYBResponseTypeData = 3
};

typedef NS_ENUM(NSUInteger, HYBRequestType) {
    kHYBRequestTypeJSON = 1, // 默认
    kHYBRequestTypePlainText  = 2 // 普通text/html
};

typedef NS_ENUM(NSInteger, HYBNetworkStatus) {
    kHYBNetworkStatusUnknown          = -1,//未知网络
    kHYBNetworkStatusNotReachable     = 0,//网络无连接
    kHYBNetworkStatusReachableViaWWAN = 1,//2，3，4G网络
    kHYBNetworkStatusReachableViaWiFi = 2,//WIFI网络
};

@class NSURLSessionTask;

// 请勿直接使用NSURLSessionDataTask,以减少对第三方的依赖
// 所有接口返回的类型都是基类NSURLSessionTask，若要接收返回值
// 且处理，请转换成对应的子类类型
typedef NSURLSessionTask HYBURLSessionTask;
typedef void(^HYBResponseSuccess)(id response);
typedef void(^HYBResponseFail)(NSError *error);

#endif /* ATNetworking_h */
