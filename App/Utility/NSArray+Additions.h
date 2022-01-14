//
// --------------------------------------------------------------------------
// NSArray+Additions.h
// Created for Mac Mouse Fix (https://github.com/noah-nuebling/mac-mouse-fix)
// Created by Noah Nuebling in 2020
// Licensed under MIT
// --------------------------------------------------------------------------
//

@import CoreGraphics;
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (Additions)

- (NSArray *)map:(id (^)(id obj))block;
- (NSArray *)filter:(BOOL (^)(id obj))block;
- (id)reduce:(id)initial
       block:(id (^)(id obj1, id obj2))block;
- (NSArray *)flatMap:(id (^)(id obj))block;

@end

NS_ASSUME_NONNULL_END
