//
//  JXCategoryTitleImageCellModel.h
//  JXCategoryView
//
//  Created by jiaxin on 2018/8/8.
//  Copyright © 2018年 jiaxin. All rights reserved.
//

#import "JXCategoryTitleCellModel.h"

typedef NS_ENUM(NSUInteger, JXCategoryTitleImageType) {
    JXCategoryTitleImageType_TopImage = 0,
    JXCategoryTitleImageType_LeftImage,
    JXCategoryTitleImageType_BottomImage,
    JXCategoryTitleImageType_RightImage,
    JXCategoryTitleImageType_OnlyImage,
    JXCategoryTitleImageType_OnlyTitle,
    JXCategoryTitleImageType_ImageBg  // 有 titleLabel 和 imageView。 image 做 background
};

@interface JXCategoryTitleImageCellModel : JXCategoryTitleCellModel

@property (nonatomic, assign) JXCategoryTitleImageType imageType;

@property (nonatomic, copy) void(^loadImageCallback)(UIImageView *imageView, NSURL *imageURL);

@property (nonatomic, copy) NSString *imageName;    //加载bundle内的图片

@property (nonatomic, strong) NSURL *imageURL;      //图片URL

@property (nonatomic, copy) NSString *selectedImageName;

@property (nonatomic, strong) NSURL *selectedImageURL;

@property (nonatomic, assign) CGSize imageSize;     //默认CGSizeMake(20, 20)

@property (nonatomic, assign) CGFloat titleImageSpacing;    //titleLabel和ImageView的间距，默认5

@property (nonatomic, assign, getter=isImageZoomEnabled) BOOL imageZoomEnabled;

@property (nonatomic, assign) CGFloat imageZoomScale;

// 仅 imageType 设置为 JXCategoryTitleImageType_ImageBg 时使用，用此属性为 imageView 与 titleLabel 四个方向设置相对距离
@property (nonatomic, assign) UIEdgeInsets imageEdgeInsets;

/// imageView img 的 contentMode
@property(nonatomic, assign) UIViewContentMode imageContentMode;

@end
