//
// --------------------------------------------------------------------------
// HelperServices.h
// Created for Mac Mouse Fix (https://github.com/noah-nuebling/mac-mouse-fix)
// Created by Noah Nuebling in 2019
// Licensed under MIT
// --------------------------------------------------------------------------
//

@import CoreGraphics;

NS_ASSUME_NONNULL_BEGIN

@interface HelperServices : NSObject
+ (void)enableHelperAsUserAgent:(BOOL)enable;
+ (BOOL)helperIsActive;
@end

NS_ASSUME_NONNULL_END
