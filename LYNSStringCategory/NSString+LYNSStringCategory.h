//
//  NSString+LYNSStringCategory.h
//  LYNSStringCategory
//
//  Created by liyang on 16/3/29.
//  Copyright © 2016年 liyang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (LYNSStringCategory)

/**
 *  利用正则表达式获取url中的参数对应的值
 *
 *  @param CS         url中需要解析的参数key
 *  @param webaddress url
 *
 *  @return key对应的value值
 */
+ (NSString *)stringResolutionUrlStr:(NSString *)webaddress WithKey:(NSString *)CS;

/**
 *  判断字符串中是否有中文
 *
 *  @param str 输入字符串
 *
 *  @return 返回一个bool值
 */
+ (BOOL)stringIsContainChineseWithStr:(NSString *)str;

/**
 *  把字符串用UTF-8编码下，返回url认识的字符串
 *
 *  @param string 需要进行编码的字符串
 *
 *  @return 编码过后的字符串
 */
- (instancetype)stringWithUTF8:(NSString *)string;

/**
 *  时间戳转年龄
 *
 *  @param totoal 时间戳
 *
 *  @return 年龄string类型
 */
+ (instancetype)stringGetAgeByTime:(long)totoal;

/**
 *  时间戳转星座
 *
 *  @param totoal 传入的时间戳
 *
 *  @return 返回结果字符串
 */
+ (instancetype)getConstellationByTime:(long)totoal;

/**
 *  判断是否是QQ号
 *
 *  @return bool
 */
- (BOOL)stringIsQQNumber;

/**
 *  判断是否是手机号
 *
 *  @return bool
 */
- (BOOL)stringIsPhoneNumber;

/**
 *  判断是否是数字
 *
 *  @return bool
 */
-(BOOL)stringIsNumber;

/**
 *  MD5加密
 *
 *  @return 字符串
 */
- (instancetype)stringWithMD5;
@end
