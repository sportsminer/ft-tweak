/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBPlaceholder : NSObject

+ (bool)isBodyPlaceholder:(int)arg1;
+ (bool)isTitlePlaceholder:(int)arg1;
+ (int)placeholderTypeFromTextType:(int)arg1;
+ (int)readPlaceholderOrientation:(int)arg1;
+ (int)readPlaceholderSize:(int)arg1;
+ (int)readPlaceholderType:(int)arg1;
+ (void)writePlaceholder:(id)arg1 toPlaceholderAtom:(struct PptOEPlaceholderAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int x7; unsigned int x8 : 8; unsigned int x9 : 8; }*)arg2 isMaster:(bool)arg3 isNotes:(bool)arg4;

@end
