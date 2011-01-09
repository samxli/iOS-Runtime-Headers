/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary;



@interface ASWBXMLPolicy : ASPolicy 
{
    NSMutableDictionary *_policyData;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;

- (void)dealloc;
- (void)_setPolicyData:(id)arg1;
- (id)asParseRules;
- (void)_cleanUpPolicyData:(id)arg1;
- (id)processedPolicyData;

@end
