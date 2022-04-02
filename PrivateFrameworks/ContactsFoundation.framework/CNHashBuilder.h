/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNHashBuilder : NSObject

+ (unsigned long long)arrayHash:(id)arg1;
+ (unsigned long long)boolHash:(bool)arg1;
+ (unsigned long long)cgfloatHash:(double)arg1;
+ (unsigned long long)cgpointHash:(struct CGPoint { double x1; double x2; })arg1;
+ (unsigned long long)cgrectHash:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (unsigned long long)cgsizeHash:(struct CGSize { double x1; double x2; })arg1;
+ (unsigned long long)hashWithBlocks:(id /* block */)arg1;
+ (unsigned long long)integerHash:(long long)arg1;
+ (unsigned long long)objectHash:(id)arg1;
+ (unsigned long long)pointerHash:(void*)arg1;
+ (unsigned long long)unsignedIntegerHash:(unsigned long long)arg1;

@end
