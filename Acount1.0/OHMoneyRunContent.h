//
//  OHMoneyRunContent.h
//  Acount1.0
//
//  Created by Ohlulu on 2017/5/12.
//  Copyright © 2017年 ohlulu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define CATEGORY_LIST @[@"食物",@"飲料",@"零食",@"交通",@"娛樂",@"寵物",@"旅行",@"服裝",@"醫療",@"居住"]
#define CATEGORY_IMAGE_NAME @[@"food",@"drink",@"candy",@"car",@"play",@"pet",@"travel",@"coat",@"doctor",@"house"]

#define isFirstOpen @"isFirstOpen"
#define addBtnPressCount @"addBtnPressCount"
#define shortVersion @"shortVersion"
#define isShowStoreReview @"isShowStoreReview"

#define OHColorRGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1];

#define OHSystemBrownColor OHColorRGBA(124,120,114,0.87)
#define OHSaveButtonActionColor OHColorRGBA(58,180,50,0.84)
#define OHMoneyTextColor OHColorRGBA(7,2,1,0.87)
#define OHHeaderViewTitleColor OHColorRGBA(221,61,22,0.87)
#define OHHeaderViewBackgroundColor OHColorRGBA(230,230,230,0.87)

#define FORMAT_MONTH @"MMM"
#define FORMAT_YEAR @"yyyy"

#define currentNumberFormatter






@interface OHMoneyRunContent : NSObject

@end
