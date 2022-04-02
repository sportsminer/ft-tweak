/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBookmark : NSObject <NSSecureCoding> {
    NSArray * _childBookmarks;
    NSString * _name;
    NSString * _urlString;
}

@property (nonatomic, copy) NSArray *childBookmarks;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *urlString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childBookmarks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFolder;
- (id)name;
- (void)setChildBookmarks:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUrlString:(id)arg1;
- (id)urlString;

@end
