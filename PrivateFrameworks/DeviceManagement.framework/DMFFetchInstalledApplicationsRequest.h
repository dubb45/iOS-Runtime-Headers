/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchInstalledApplicationsRequest : CATTaskRequest {
    NSArray * _bundleIdentifiers;
    BOOL  _excludeIcon;
    unsigned int  _stateFilter;
    unsigned int  _typeFilter;
}

@property (nonatomic, copy) NSArray *bundleIdentifiers;
@property (nonatomic) BOOL excludeIcon;
@property (nonatomic) unsigned int stateFilter;
@property (nonatomic) unsigned int typeFilter;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)excludeIcon;
- (id)initWithCoder:(id)arg1;
- (void)setBundleIdentifiers:(id)arg1;
- (void)setExcludeIcon:(BOOL)arg1;
- (void)setStateFilter:(unsigned int)arg1;
- (void)setTypeFilter:(unsigned int)arg1;
- (unsigned int)stateFilter;
- (unsigned int)typeFilter;

@end
