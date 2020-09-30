//
//  OMiPaySDK.h
//  OMiPayDemo
//
//  Created by OMi on 2017/12/5.
//  Copyright © 2017年 OMi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CompletionActionBlock)(id result);

@interface OMiPaySDK : NSObject

/**
 *  创建支付单例服务
 *
 *  @return 返回单例对象
 */
+ (OMiPaySDK *)defaultService;

/**
 *  支付接口
 *
 *  @param orderInfo       订单信息<NSDictionary>
 *  @param appScheme       调用支付的app注册在info.plist中的scheme
 *  @param secretKey       商户密钥:可在商户后台中找到
 *  @param number          商户编号:可在商户后台中找到
 *  @param orderBlock     返回Omipay订单号（订单号在拉起支付宝、微信、POLI之前返回）
 *  @param completionBlock （1、支付结果回调Block，用于wap支付结果回调（非跳转钱包支付）2、生成订单信息及签名错误回调）
 */
- (void)payOrderInfo:(NSDictionary *)orderInfo
        appScheme:(NSString *)appScheme
MerchantSecretKey:(NSString *)secretKey
   MerchantNumber:(NSString *)number
         orderback:(CompletionActionBlock)orderBlock
         completionback:(CompletionActionBlock)completionBlock;

/**
 *  处理钱包或者独立快捷app支付跳回商户app携带的支付结果Url
 *
 *  @param resultUrl        支付结果url
 *  @param completionBlock  支付结果回调
 */
- (void)processOrderWithPaymentResult:(NSURL *)resultUrl
                      standbyCallback:(CompletionActionBlock)completionBlock;

/**
 *  处理授权信息Url
 *
 *  @param resultUrl        钱包返回的授权结果url
 *  @param completionBlock  授权结果回调
 */
- (void)processAuthResult:(NSURL *)resultUrl
          standbyCallback:(CompletionActionBlock)completionBlock;


@end
