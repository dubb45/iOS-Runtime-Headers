/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryStoreMigrator : NSObject {
    CXCallDirectoryStore * _store;
}

@property (nonatomic, retain) CXCallDirectoryStore *store;

- (void).cxx_destruct;
- (id)_performMigrationsStartingAtSchemaVersion:(int)arg1 error:(id*)arg2;
- (id)performMigrationsWithError:(id*)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end