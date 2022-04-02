/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReportPlanner : NSObject {
    DKReporterRegistry * _registry;
}

@property (nonatomic, retain) DKReporterRegistry *registry;

+ (id)plannerWithReportGeneratorRegistry:(id)arg1;

- (void).cxx_destruct;
- (struct NSSet { Class x1; }*)_resolveComponentIdentityManifest:(struct NSSet { Class x1; }*)arg1;
- (id)initWithReportGeneratorRegistry:(id)arg1;
- (id)registry;
- (struct NSArray { Class x1; }*)requestGroupsForPredicateManifest:(struct NSSet { Class x1; }*)arg1;
- (void)setRegistry:(id)arg1;

@end
