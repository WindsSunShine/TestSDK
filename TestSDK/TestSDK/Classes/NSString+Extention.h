//
//  NSString+Extention.h
//  joywok
//
//  Created by alin on 16/3/8.
//  Copyright © 2016年 Dogesoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extention)
//返回字符串所占用的尺寸.
-(CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;
//md5加密
- (NSString *)md5;
- (NSString *)MD5String;
//返回日期
- (NSDate *)dateWithDateFormat:(NSString *)dateFormat;
/*判断是不是数字字符串*/
- (BOOL)isNumberStr;
//是否是char字符串
- (BOOL)isCharacterStr;
//首字符是不是char
- (BOOL)prefixIsCharacter;
/**是否是身份证*/
- (BOOL)isIdCardStr;

/**剔除字符串的首尾空格*/
- (NSString *)trimmingWhiteChartSet;

/**千位分隔符*/
- (NSString *)separatedDigitString;
- (NSString *)separatedDigitStringWithDecimals:(NSInteger)decimals;

@end
