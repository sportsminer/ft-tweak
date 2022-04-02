/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMParagraphMapper : CMMapper {
    OIXMLElement * mActiveNode;
    bool  mIsDeleted;
    WDParagraph * wdParagraph;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withState:(id)arg3;

- (void).cxx_destruct;
- (id)activeNode;
- (bool)containsOfficeArt;
- (id)initWithBlock:(id)arg1 parent:(id)arg2;
- (bool)isCollapsable:(id)arg1;
- (bool)isTextFrame;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (void)mapParagraphBodyWithState:(id)arg1;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (id)runAtIndex:(unsigned long long)arg1;

@end
