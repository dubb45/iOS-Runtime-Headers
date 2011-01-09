/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;



@interface NSCompoundPredicate : NSPredicate 
{
    void *_reserved2;
    NSUInteger _type;
    NSArray *_subpredicates;
}

+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)_operatorForType:(NSUInteger)arg1;

- (id)predicateFormat;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (NSUInteger)compoundPredicateType;
- (void)acceptVisitor:(id)arg1 flags:(NSUInteger)arg2;
- (id)initWithType:(NSUInteger)arg1 subpredicates:(id)arg2;
- (id)predicateOperator;
- (id)subpredicates;
- (id)_subpredicateDescription:(id)arg1;
- (void)_acceptSubpredicates:(id)arg1 flags:(NSUInteger)arg2;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)_predicateOperator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (BOOL)ab_hasCallback;
- (void)ab_addCallbackContextToArray:(struct __CFArray { }*)arg1;
- (id)ab_newQueryWithSortOrder:(NSUInteger)arg1 addressBook:(void*)arg2 propertyIndices:(const struct __CFDictionary {}**)arg3;
- (void)ab_bindStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(NSInteger*)arg2 predicateIdentifier:(NSInteger)arg3;
- (id)minimalFormInContext:(id)arg1;

@end