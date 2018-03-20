//
//  WTNSOperation.h
//  上传
//
//  Created by Facebook on 2018/3/20.
//  Copyright © 2018年 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Qiniu/QNUploadManager.h>

@interface WTNSOperation : NSOperation

@property (nonatomic, copy) NSString *wt_identifier;

+ (instancetype)operationWithUploadManager:(QNUploadManager *)uploadManager filePath:(NSString *)filePath key:(NSString *)key token:(NSString *)token success:(void(^)(void))success failure:(void(^)(NSError *error))failure;

- (instancetype)initWithUploadManager:(QNUploadManager *)uploadManager filePath:(NSString *)filePath key:(NSString *)key token:(NSString *)token success:(void (^)(void))success failure:(void (^)(NSError *))failure;

@end
